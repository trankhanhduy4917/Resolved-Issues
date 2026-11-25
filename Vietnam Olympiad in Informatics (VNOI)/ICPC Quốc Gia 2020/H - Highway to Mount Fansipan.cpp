#include <bits/stdc++.h>
using namespace std;

static constexpr long long MOD = 1'000'000'007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> w(n);
        for (int i = 0; i < n; i++) cin >> w[i];

        int d;
        cin >> d;
        int dic[26][51]{};
        vector<string> target;
        string x;
        for (int i = 0; i < d; i++) {
            cin >> x;
            int len = x.size();
            dic[x[0] - 'a'][len]++;
            if (len == n) {
                target.push_back(move(x));
            }
        }

        long long result = 0;
        for (const string& s : target) {
            dic[s[0] - 'a'][n]--;

            long long temp = 1;
            int j = 0;
            for (; j < n; j++) {
                int avail = dic[s[j] - 'a'][w[j]];
                if (avail <= 0) {
                    temp = 0;
                    break;
                }
                temp = (temp * avail) % MOD;
                dic[s[j] - 'a'][w[j]]--;
            }

            for (int k = 0; k < j; k++) {
                dic[s[k] - 'a'][w[k]]++;
            }
            dic[s[0] - 'a'][n]++;

            result += temp;
        }

        cout << result % MOD << "\n";
    }
    return 0;
}
