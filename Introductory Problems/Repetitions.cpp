#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    long long max_length = 1, length = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] != s[i]) {
            length = 1;
        }
        else length++;
        max_length = max(max_length, length);
    }

    cout << max_length;
    
    return 0;
}