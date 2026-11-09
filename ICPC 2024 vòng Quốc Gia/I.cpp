#include <bits/stdc++.h>
#define ll long long
#define db double
#define f0(i,n) for(int i=0;i<n;++i)
#define f1(i,n) for(int i=1;i<=n;++i)
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpi;
typedef vector<ll> vll;
typedef vector<bool> vb;
const ll mod = (ll)1e9 + 7;
const int MAXN = (int)1e5 + 5;

void Solve()
{
    int n; string a, b; cin >> n >> a >> b;
    int w = 0;
    f0(i,n){
        int sg = (i % 2 == 0) ? 1 : -1;
        w += sg * ((a[i]-'0') - (b[i]-'0'));
    }
    cout << (w == 0 ? "YES\n" : "NO\n");
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
        Solve();
    }
    return 0;
}
