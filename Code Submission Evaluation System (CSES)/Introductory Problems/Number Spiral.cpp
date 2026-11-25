#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long layer = max(x, y);
        long long mx = layer * layer;
        long long mn = mx - 2 * layer + 2;

        if (x > y) {
            cout << ((x & 1) ? mn + (y - 1) : mx - (y - 1)) << '\n';
        } else if (y > x) {
            cout << ((y & 1) ? mx - (x - 1) : mn + (x - 1)) << '\n';
        } else {
            cout << mx - x + 1 << '\n';
        }
    }

    return 0;
}
