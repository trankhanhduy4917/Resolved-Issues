#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("K.inp", "r", stdin);
    freopen("K.out", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        vector<long long> k(n + 1, 0);
        priority_queue<int> pq;
        int tmp = 1;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == s[i]) {
                tmp++;
            } else {
                pq.push(tmp);
                tmp = 1;
            }
            if (i == n - 1) pq.push(tmp);
        }

        int mx = pq.top();
        pq.pop();
        if (mx & 1) {
            pq.push(mx / 2);
            pq.push(mx / 2);
        } else {
            pq.push(mx / 2);
            pq.push((mx - 1) / 2);
        }
        while (!pq.empty()) {
            int len = pq.top();
            pq.pop();
            for (int i = 1; i <= len; i++) k[i] += (len - i + 1);
        }

        for (int i = 1; i <= n; i++) cout << (i == 1 ? n : k[i]) << " ";
        cout << '\n';
    }
    return 0;
}
