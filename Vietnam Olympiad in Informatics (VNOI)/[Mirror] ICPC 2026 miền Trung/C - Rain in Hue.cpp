#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int postponed = 0;
    long long total = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x >= m) {
            postponed++;
            total += x;
        }
    }

    cout << postponed << ' ' << total << '\n';
    return 0;
}
