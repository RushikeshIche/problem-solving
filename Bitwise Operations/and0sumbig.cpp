#include <bits/stdc++.h>
#define ll long long int
#define fori for (ll i = 0; i < n; i++)
#define forj for (ll j = 0; j < n; j++)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define nbi(x) __builtin_popcountll(x);
#define vi vector<ll>
#define pi pair<ll, ll>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
int mod = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = 1;
        REP(i, 0, k)
        {
            ans = (ans * n) % mod;
        }
        cout << ans << endl;
    }

    return 0;
}
auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();