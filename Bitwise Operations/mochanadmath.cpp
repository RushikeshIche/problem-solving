#include <bits/stdc++.h>
#define ll long long int
#define fori for (ll i = 0; i < n; i++)
#define forj for (ll j = 0; j < n; j++)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define nbi(x) __builtin_popcountll(x)
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
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        REP(i, 0, n)
        {
            cin >> v[i];
        }
        int x = v[0];
        REP(i, 1, n)
        {
            x &= v[i];
        }
        cout << x << endl;
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