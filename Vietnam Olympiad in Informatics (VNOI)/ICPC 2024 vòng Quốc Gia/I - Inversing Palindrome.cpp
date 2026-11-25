#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;

    int diff = 0;
    for (int i = 0; i < n; i++) {
        int sign = (i & 1) ? -1 : 1;
        diff += sign * ((a[i] - '0') - (b[i] - '0'));
    }

    cout << (diff == 0 ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
