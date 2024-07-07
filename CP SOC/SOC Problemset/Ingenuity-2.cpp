#include <bits/stdc++.h>
using namespace std;

#define loop(i, n, x) for (long long i = x; i < n; i++)
#define ll long long
#define all(v) v.begin(), v.end()
#define pb(e) push_back(e)
#define endl '\n'

bool cmp2(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<char> a(n);
    map<char, int> m;
    for (auto &t : a)
    {
        cin >> t;
        m[t]++;
    }
    if (n % 2 || m['N'] % 2 != m['S'] % 2 || m['E'] % 2 != m['W'] % 2 || n == 2 && a[0] != a[1])
    {
        cout << "NO" << endl;
        return;
    }
    vector<char> ans(n);
    for (auto t : {'N', 'S', 'E', 'W'})
    {
        int res = 0;
        if (t == 'N' || t == 'S')
            res = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == t)
            {
                if (res)
                    ans[i] = 'H';
                else
                    ans[i] = 'R';
                res ^= 1;
            }
        }
    }
    for (auto t : ans)
        cout << t;
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
