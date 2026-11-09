#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> wards(n + 1, 0);
        for (int i = 1; i <= n; i++) cin >> wards[i];

        int nor = 0;
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            if (abs(wards[u] - wards[v]) == 1 || abs(wards[u] - wards[v]) == 3) {
                nor++;
            }
        }

        cout << nor << '\n';
    }
    return 0;
}
