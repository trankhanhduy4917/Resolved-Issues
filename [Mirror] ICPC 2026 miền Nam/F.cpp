#include <bits/stdc++.h>

using namespace std;

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

        vector<int> arr(n + 1), result;
        for (int i = 1; i <= n; i++) cin >> arr[i];

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 1)
            {
                for (int j = i; j <= n; j += i)
                {
                    if (arr[j] == 1) arr[j] = 0;
                    else arr[j] = 1;
                }
                result.push_back(i);
            }
        }

        cout << result.size() << endl;
        for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}