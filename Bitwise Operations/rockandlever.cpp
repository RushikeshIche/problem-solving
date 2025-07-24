#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, ll> cnt;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int k = 31 - __builtin_clz(x);
        cnt[k]++;
    }
    ll res = 0;
    for (auto [a, b] : cnt)
    {
        res += b * (b - 1) / 2;
    }
    cout << res << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}