#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, postponed = 0, total = 0;
    cin >> n >> m;

    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x >= m) {
            postponed++;
            total += x;
        }
    }

    cout << postponed << " " << total;
    
    return 0;
}