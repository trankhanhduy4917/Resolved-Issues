#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        long long x1 = LLONG_MAX, y1 = LLONG_MAX;
        long long x2 = LLONG_MIN, y2 = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            x1 = min(x1, a);
            y1 = min(y1, b);
            x2 = max(x2, a);
            y2 = max(y2, b);
        }

        for (int i = 0; i < m; i++) {
            long long a1, b1, a2, b2;
            cin >> a1 >> b1 >> a2 >> b2;
            x1 = min(x1, a1);
            y1 = min(y1, b1);
            x2 = max(x2, a2);
            y2 = max(y2, b2);
        }

        for (int i = 0; i < q; i++) {
            long long a, b, r;
            cin >> a >> b >> r;
            x1 = min(x1, a - r);
            y1 = min(y1, b - r);
            x2 = max(x2, a + r);
            y2 = max(y2, b + r);
        }

        long long side = max(x2 - x1, y2 - y1);
        cout << side * side << '\n';
    }
    return 0;
}
