#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    long long sum = 0, last;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (i > 0) {
            if (x < last) {
                sum += last - x;
                x += last - x;
            }
        }
        last = x;
    }

    cout << sum;
    
    return 0;
}