#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int freq[26]{};
    for (char c : s) freq[c - 'A']++;

    int odd = 0, even = 0, pairs = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            if (freq[i] & 1) {
                odd++;
            } else {
                even++;
            }
        }
        pairs += freq[i] / 2;
    }

    if (odd > 1) {
        cout << pairs + 1 << '\n';
    } else if (odd == 1) {
        cout << (even == 0 ? -1 : pairs) << '\n';
    } else {
        cout << (even == 1 ? -1 : pairs - 1) << '\n';
    }
    return 0;
}
