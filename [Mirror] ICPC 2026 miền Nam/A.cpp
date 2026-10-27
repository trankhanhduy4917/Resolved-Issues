#include <bits/stdc++.h>

using namespace std;


long long get_pos(long long len, long long start, long long v, long long t) {
    long long W = len - 1;
    long long x0 = start - 1;
    long long d = t * abs(v);

    long long D;

    if (v >= 0) {
        D = x0 + d;
    } else {
        if (d <= x0) {
            return (x0 - d) + 1;
        }
        D = d - x0;
    }

    long long cushion = D / W;
    long long left_d = D % W;

    long long pos;
    if (cushion % 2 == 0) {
        pos = left_d;
    } else {
        pos = W - left_d;
    }

    return pos + 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m, x, y, vx, vy;
    int q;
    cin >> n >> m >> x >> y >> vx >> vy >> q;

    while (q--) {
        long long t;
        cin >> t;
        cout << get_pos(n, x, vx, t) << ' ' << get_pos(m, y, vy, t) << '\n';
    }

    return 0;
}