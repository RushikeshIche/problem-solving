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
    int t;
    cin >> t;

    unordered_map<int, int> cnt;
    ll ans = 0;
    while (t--)
    {
        string s;
        cin >> s;
        ll mask = 0;
        for (char c : s)
        {
            mask ^= (1 << (c - 'a'));
        }
        ans += cnt[mask];
        for (ll flip = 0; flip < 26; flip++)
        {
            mask ^= (1 << flip);
            ans += cnt[mask];
            mask ^= (1 << flip);
        }
        ++cnt[mask];
    }
    cout << ans << endl;
    return 0;
}
auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();