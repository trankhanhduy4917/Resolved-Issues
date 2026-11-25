#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> wards(n + 1, 0);
        for (int i = 1; i <= n; i++) cin >> wards[i];

        int count = 0;
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            int diff = abs(wards[u] - wards[v]);
            if (diff == 1 || diff == 3) count++;
        }

        cout << count << '\n';
    }
    return 0;
}
