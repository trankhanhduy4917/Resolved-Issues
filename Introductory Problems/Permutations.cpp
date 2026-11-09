#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    
    if (n == 1) cout << n;
    else if (n < 4) {
        cout << "NO SOLUTION";
    } else {
        for (int i = n - 1; i > 0; i -= 2) cout << i << " ";
        for (int i = n; i > 0; i -= 2) cout << i << " ";
    }

    return 0;
}