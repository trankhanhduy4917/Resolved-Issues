#include <bits/stdc++.h>
using namespace std;

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
        vector<long long>  A(n), B(n - 1), k(n, 0);
        for (int i = 0; i < n - 1; i++) cin >> B[i];

        A[0] = A[1] = B[0];
        k[0] = k[1] = 1;
        int i = 2, j = 1;
        while (j != n - 1) {
            if (k[i] == 0) {
                if (A[i - 1] % B[j] == 0) {
                    A[i] = B[j];
                    i++;
                    j++;
                } else {
                    if (A[i - 1] > B[j]) {

                    } else {

                    }
                }
            }
        }
    }
    return 0;
}
