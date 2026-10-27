#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        long long n, m, q;
        cin >> n >> m >> q;
        
        long long x1 = LONG_LONG_MAX, y1 = LONG_LONG_MAX, x2 = LONG_LONG_MIN, y2 = LONG_LONG_MIN;

        for (long long i = 0, a, b; i < n; i++) {
            cin >> a >> b;
            if (a < x1) x1 = a;
            if (b < y1) y1 = b;
            if (a > x2) x2 = a;
            if (b > y2) y2 = b;
        }

        for (long long i = 0, a1, b1, a2, b2; i < m; i++) {
            cin >> a1 >> b1 >> a2 >> b2;
            if (a1 < x1) x1 = a1;
            if (b1 < y1) y1 = b1;
            if (a2 > x2) x2 = a2;
            if (b2 > y2) y2 = b2;
        }

        for (long long i = 0, a, b, r; i < q; i++) {
            cin >> a >> b >> r;
            if (a - r < x1) x1 = a - r;
            if (b - r < y1) y1 = b - r;
            if (a + r > x2) x2 = a + r;
            if (b + r > y2) y2 = b + r;
        }

        long long side = max(x2 - x1, y2 - y1), result = side * side;
        cout << result << endl;
    }
    
    return 0;
}