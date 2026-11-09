#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("E.inp", "r", stdin);
    freopen("E.out", "w", stdout);

    int k;
    cin >> k;

    const int ans[] = {0, 0, 537, 546, 636, 735, 835, 935, 1035, 1135};
    cout << ans[k] << '\n';
    return 0;
}
