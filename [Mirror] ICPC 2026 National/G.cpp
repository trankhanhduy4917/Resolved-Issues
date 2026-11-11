#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<long long>  A(n), B(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> B[i];
    A[0] = B[0];
    for (int i = 1; i < n - 1; i++) A[i] = lcm(B[i - 1], B[i]);
    A[n - 1] = B[n - 2];
    for (int i = 0; i < n - 1; i++) {
        if (gcd(A[i], A[i + 1]) != B[i]) {
            cout << -1 << '\n';
            return;
        }
    }

    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("G.inp", "r", stdin);
    freopen("G.out", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
