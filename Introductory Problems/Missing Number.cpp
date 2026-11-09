#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    long long sumn = n * (n + 1) / 2, sum = 0;

    for (int i = 0, x; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }
    
    cout << sumn - sum;
    
    return 0;
}