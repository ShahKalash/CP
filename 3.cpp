#include "bits/stdc++.h"
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define dbg(x...)
#endif
using namespace std;
using ll = long long;
#define int ll
#define endl '\n'
const int mod = 1000000007;
// clang-format off
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// #define _GLIBCXX_DEBUG
// clang-format on

void solve()
{
    ll t, m, n, a, b;
    string h, s;
    cin >> h >> s;
    int i = 0, j = 0;
    n = h.length(), m = s.length();
    while (i < n && j < m)
    {
        if (s[j] == h[i])
        {
            j++;
            i++;
            continue;
        }
        if (h[i] == '?')
        {
            h[i] = s[j];
            i++;
            j++;
            continue;
        }
        i++;
    }
    if (j == m)
    {
        cout << "YES" << endl;
        for (auto &i : h)
            if (i == '?')
                cout << "a";
            else
                cout << i;
        cout << endl;
    }
    else
        cout << "NO\n";
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}