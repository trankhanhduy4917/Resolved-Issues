#include <bits/stdc++.h>
#define ll long long
#define f0(i,n) for(int i=0;i<n;++i)
#define f1(i,n) for(int i=1;i<=n;++i)
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vpi;
typedef vector<long long> vll;
typedef vector<bool> vb;
const ll mod = (ll)1e9 + 7;
const int MAXN = (int)1e5 + 4;

void Solve()
{
    int n, x; cin >> n >> x;
    vi v(n), a(n);
    f0(i, n){
        cin >> v[i];
        a[i] = v[i];
        if(v[i] == -1) a[i] = x;
    }
    if(n == 1){
        if(a[0] == x || a[0] == -1){
            cout << "YES\n";
            cout << x << endl;
        }
        else cout << "NO\n";
        return;
    } 
    sort(a.begin(), a.end());
    int m = a[n / 2], cntl = 0, cntr = 0;
    
    //cerr << m  << endl;
    if(m == x){
        cout << "YES\n";
        for(int i = 0; i < n; ++i){
            if(v[i] == -1) cout << x << " ";
            else cout << v[i] << " ";
        }
        cout << "\n";
    }
    else{
        cout << "NO\n";
    }
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
