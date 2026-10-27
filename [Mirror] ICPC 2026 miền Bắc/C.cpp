#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, limit = 2 * 1e5, overcharge = 0, discharge = 0;
    cin >> n;

    vector<int> array(n), elements_visited(3 * 1e5, 0), cost(3 * 1e5, 0), elements_reached(3 * 1e5, 0);
    for (int i = 0; i < n; i++) cin >> array[i];

    for (int size_of_elements = 1; size_of_elements <= n; size_of_elements++)
    {
        discharge = 0;
        int down = array[size_of_elements - 1];
        
        while (down >= 0)
        {
            overcharge = 0;

            int up = down;
            while (up <= limit)
            {
                if (elements_visited[up] == size_of_elements) break;
                elements_visited[up] = size_of_elements;
                cost[up] += overcharge + discharge;
                elements_reached[up]++;
                up = up * 2 + 1;
                overcharge++;
            }

            if (down == 0) break;
            down /= 2;
            discharge++;
        }
    }

    int minimum_cost = -1;
    for (int i = 0; i <= limit; i++)
        if (elements_reached[i] == n)
            if (minimum_cost == -1 || cost[i] < minimum_cost) minimum_cost = cost[i];
    
    cout << minimum_cost;
    return 0;
}