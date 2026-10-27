#include <bits/stdc++.h>

using namespace std;

long long nCr(int n, int r) {
    if(r > n) return 0;
    if(r > n - r) r = n - r;
    long long result = 1;
    for(int i = 1; i <= r; i++) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> compress, frequency;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        if (compress.empty() || compress[compress.size() - 1] != y)
        {
            compress.push_back(y);
            frequency.push_back(1);
        }
        else
        {
            frequency[frequency.size() - 1]++;
        }
    }
    
    long long result = 0;
    int m = frequency[0];
    for (int i = 1; i < compress.size(); i++)
        if (compress[i - 1] > compress[i])
        {
            if (i - 2 >= 0 && compress[i - 2] > compress[i - 1])
            {
                result += nCr(m, 2);
                result -= nCr(frequency[i - 1], 2);
                m = frequency[i - 1] + frequency[i];
            }
            else m += frequency[i];
        }
        else if (compress[i - 1] < compress [i])
        {
            if (i - 2 >= 0 && compress[i - 2] < compress[i - 1])
            {
                result += nCr(m, 2);
                result -= nCr(frequency[i - 1], 2);
                m = frequency[i - 1] + frequency[i];
            }
            else m += frequency[i];
        }
        else m += frequency[i];
    result += nCr(m, 2);
    cout << result;
    return 0;
}