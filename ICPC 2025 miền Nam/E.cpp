#include <bits/stdc++.h>

using namespace std;

bool coprime(int x, int y)
{
    bool checking = false;
    if (x % y == 0 || y % x == 0 || gcd(x, y) == 1) checking = true;
    return checking;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> arr;
        for (int i = 0, x; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }

        long long pair1 = 0, pair2 = 0;
        for (int i = 0; i + 1 < n; i += 2)
            if (coprime(arr[i], arr[i + 1])) 
                pair1++;
            else 
                pair2++;

        long long result = pair1 + pair2 * 2;
        long long rest_pairs = (n % 2) + pair2;
        result += (rest_pairs / 2) + (rest_pairs % 2) * 2;

        cout << result << endl;
    }
    return 0;
}