#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        int G, W, R, T;

        cin >> G >> W >> R >> T;
        int x = 1, y = 1, z = 1;
        long long total = G * x + W * y + R * z;
        while (total <= T)
        {
            x++;
            y++;
            z++;
            total = G * x + W * y + R * z;
        }
        z--;
        total = G * x + W * y + R * z;
        if (total <= T) cout << "Resting Phase" << endl;
        else
        {
            y--;
            total = G * x + W * y + R * z;
            if (total <= T) cout << "Warning Beat" << endl;
            else cout << "Guiding Beat" << endl;
        }
    }
    return 0;
}
