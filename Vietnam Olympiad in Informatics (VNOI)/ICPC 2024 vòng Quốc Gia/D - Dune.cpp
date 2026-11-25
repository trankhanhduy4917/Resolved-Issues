#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        long long g, w, r, t;
        cin >> g >> w >> r >> t;

        long long rem = t % (g + w + r);
        if (rem >= g + w) {
            cout << "Resting Phase\n";
        } else if (rem >= g) {
            cout << "Warning Beat\n";
        } else {
            cout << "Guiding Beat\n";
        }
    }
    return 0;
}
