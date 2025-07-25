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
int main()
{
    ll l, r;
    cin >> l >> r;
    if (l == r)
        cout << 0 << endl;
    else
    {
        ll x = l ^ r;
        ll MSB = 63 - __builtin_clzll(x);
        cout << (2 * (1LL << MSB) - 1) << endl;
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