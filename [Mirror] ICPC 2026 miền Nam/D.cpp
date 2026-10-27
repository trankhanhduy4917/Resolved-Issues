#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    vector<int> alphabet(26, 0);
    for (int i = 0; i < s.size(); i++) alphabet[s[i] - 'A']++;

    int odd = 0, even = 0, result = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] != 0)
        {
            if (alphabet[i] % 2 != 0) odd++;
            else even++;
        }
        result += (alphabet[i] / 2);
    }

    if (odd > 1) cout << result + 1;
    else if (odd == 1)
    {
        if (even == 0) cout << -1;
        else cout << result;
    }
    else 
    {
        if (even == 1) cout << -1;
        else cout << result - 1;
    }
    return 0;
}