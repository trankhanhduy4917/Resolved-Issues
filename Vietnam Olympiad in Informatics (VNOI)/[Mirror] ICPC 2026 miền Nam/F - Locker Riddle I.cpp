#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1), ans;
        for (int i = 1; i <= n; i++) cin >> a[i];

        for (int i = 1; i <= n; i++) {
            if (a[i] == 1) {
                for (int j = i; j <= n; j += i) {
                    a[j] ^= 1;
                }
                ans.push_back(i);
            }
        }

        cout << ans.size() << '\n';
        for (int x : ans) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
