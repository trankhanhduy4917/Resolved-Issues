#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long dx = abs(x1 - x2), dy = abs(y1 - y2);
        cout << 2 * max(dx, dy) - ((dx ^ dy) & 1) << '\n';
    }
    return 0;
}
