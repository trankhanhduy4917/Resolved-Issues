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

        vector<int> col0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                if (j == 0 && x == 1) col0.push_back(i);
            }
        }

        cout << col0.size() << '\n';
        for (int r : col0) {
            cout << r << " 0\n";
        }
    }
    return 0;
}
