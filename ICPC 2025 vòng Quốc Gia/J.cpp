#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> room[n], cell[n];

        for (int i = 0; i < n; i++)
            for (int j = 0, x; j < n; j++) {
                cin >> x;
                if (x == 1) {
                    room[i].push_back(j);
                    cell[j].push_back(i);
                }
            }

        cout << cell[0].size() << endl;
        for (auto r : cell[0])
            cout << r << " " << 0 << endl;
    }
    
    return 0;
}