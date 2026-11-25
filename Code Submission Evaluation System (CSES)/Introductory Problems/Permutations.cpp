#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << '\n';
    } else if (n < 4) {
        cout << "NO SOLUTION\n";
    } else {
        for (int i = n - 1; i > 0; i -= 2) cout << i << ' ';
        for (int i = n; i > 0; i -= 2) cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
