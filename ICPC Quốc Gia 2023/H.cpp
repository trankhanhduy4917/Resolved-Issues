#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    long long last = 0;
    while (q--)
    {
        long long t;
        cin >> t;
        if (t == 1)
        {
            long long p;
            cin >> p;
            p = ((p + last - 1) % (n - 1)) + 1;
            swap(a[p], a[p + 1]);
        }
        if (t == 2)
        {
            long long l, r, x;
            cin >> l >> r >> x;
            if (last != 0)
            {
                l = ((l + last - 1) % n) + 1;
                r = ((r + last - 1) % n) + 1;
                x = ((x + last - 1) % n) + 1;
            }
            if (l > r) swap(l, r);
            long long b = 0, i = 0, o = n;
            while (i <= o)
            {
                long long m = i + (o - l) / 2;
                if (a[m].first == x) {
                    i = m;
                    break;
                }
                else if (a[m].first > x) r = m - 1;
                else l = m + 1;
            }
            for (int j = i; j <= n; j++)
                if(a[j].first == x) b += a[j].second * a[j].second;
            for (int j = i; j >= 1; j--)
                if(a[j].first == x) b += a[j].second * a[j].second;
            cout << b << '\n';
            last = b;
        }
        if (t == 3)
        {
            long long l, r, x;
            cin >> l >> r >> x;
            if (last != 0)
            {
                l = ((l + last - 1) % n) + 1;
                r = ((r + last - 1) % n) + 1;
                x = ((x + last - 1) % n) + 1;
            }
            if (l > r) swap(l, r);
            long long b = 0, i = 0, o = n, found = 0;
            while (i <= o)
            {
                long long m = i + (o - l) / 2;
                if (a[m].first == x) {
                    i = m;
                    break;
                }
                else if (a[m] > x) r = m - 1;
                else l = m + 1;
            }
            for (int j = i; j >= 1; j--)
                if (a[j].first != x) i = j + 1;
            for (int j = i; j <= n; j++)
                if (a[j].first == x && found + 1 >= l && found + 1 <= r) {
                    found++;
                    b += j * j;
                }
                else if (a[j].first == x) found++;
                else break;
            cout << b << '\n';
            last = b;
        }
    }
    return 0;
}
