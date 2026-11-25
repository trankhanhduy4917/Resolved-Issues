#include <bits/stdc++.h>
using namespace std;

bool can_pair(int x, int y) {
    return x % y == 0 || y % x == 0 || gcd(x, y) == 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long pair1 = 0, pair2 = 0;
        for (int i = 0; i + 1 < n; i += 2) {
            if (can_pair(a[i], a[i + 1])) {
                pair1++;
            } else {
                pair2++;
            }
        }

        long long rest_pairs = (n % 2) + pair2;
        long long result = pair1 + pair2 * 2 + (rest_pairs / 2) + (rest_pairs % 2) * 2;
        cout << result << '\n';
    }
    return 0;
}
