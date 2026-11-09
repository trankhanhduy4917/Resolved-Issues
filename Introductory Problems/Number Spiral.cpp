#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long ma = max(x, y) * max(x, y), mi = ma - 2 * max(x, y) + 2;
        if (x > y) {
            if (x & 1) cout << mi + (y - 1) << '\n';
            else cout << ma - (y - 1) << '\n';
        } else if (y > x) {
            if (y & 1) cout << ma - (x - 1) << '\n';
            else cout << mi + (x - 1) << '\n';
        } else {
            cout << ma - x + 1 << '\n';
        }
    }

    return 0;
}