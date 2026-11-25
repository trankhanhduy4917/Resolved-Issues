#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long moves = 0, prev = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (i > 0 && x < prev) {
            moves += prev - x;
        } else {
            prev = x;
        }
    }

    cout << moves << '\n';

    return 0;
}
