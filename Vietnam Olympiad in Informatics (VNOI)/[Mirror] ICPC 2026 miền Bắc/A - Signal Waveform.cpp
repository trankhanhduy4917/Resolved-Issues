#include <bits/stdc++.h>
using namespace std;

long long choose2(long long m) {
    return m * (m - 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> compress, freq;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        if (compress.empty() || compress.back() != y) {
            compress.push_back(y);
            freq.push_back(1);
        } else {
            freq.back()++;
        }
    }

    long long result = 0;
    int m = freq[0];
    int k = static_cast<int>(compress.size());
    for (int i = 1; i < k; i++) {
        if (compress[i - 1] > compress[i]) {
            if (i - 2 >= 0 && compress[i - 2] > compress[i - 1]) {
                result += choose2(m);
                result -= choose2(freq[i - 1]);
                m = freq[i - 1] + freq[i];
            } else {
                m += freq[i];
            }
        } else if (compress[i - 1] < compress[i]) {
            if (i - 2 >= 0 && compress[i - 2] < compress[i - 1]) {
                result += choose2(m);
                result -= choose2(freq[i - 1]);
                m = freq[i - 1] + freq[i];
            } else {
                m += freq[i];
            }
        } else {
            m += freq[i];
        }
    }
    result += choose2(m);

    cout << result << '\n';
    return 0;
}
