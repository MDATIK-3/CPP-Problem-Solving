#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define loop(n) for (ll i = 0; i < n; i++)
#define rloop(n) for (ll i = n - 1; i >= 0; i--)

int ans;

vector<int> z_fun(string a, string t)
{
    string s = t + '$' + a;
    int n = s.size();
    vector<int> z(n, 0);

    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        if (i > r)
        {
            r = l = i;

            while (r < n && s[r] == s[r - l])
            {
                r++;
            }
            z[i] = r - l;
            r--;
        }
        else
        {
            int k = i - l;
            if (z[k] + i - 1 < r)
            {
                z[i] = z[k];
            }
            else
            {
                l = i;
                while (r < n && s[r] == s[r - l])
                {
                    r++;
                }
                z[i] = r - l;
                r--;
            }
        }
    }
    return z;
}

bool fun(string s, string t)
{
    vector<int> z = z_fun(s, t);
    int res = -1;
    int m = t.size(), n = s.size();
    string p, q;
    p.pb(s[0]);
    q.pb(t[n - 1]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != t[0])
        {
            p.pb(s[i]);
            q.pb(t[n - i - 1]);
            continue;
        }
        if (z[m + 1 + i] == n - i && p == q)
        {
            res = i;
            ans = i;
            return 1;
        }
        p.pb(s[i]);
        q.pb(t[n - i - 1]);
    }

    return 0;
}

signed main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        string t, t1;

        int i = 0, f = 0;

        while (i < n)
        {
            int j = 0;
            while (j < k)
            {
                if (f)
                    t.pb('0'), t1.pb('1');
                else
                    t.pb('1'), t1.pb('0');
                j++;
            }

            f = 1 - f;
            i += k;
        }

        bool ok = fun(s, t);

        ok |= fun(s, t1);

        if (s == t || s == t1)
        {
            ans = n;
            ok = 1;
        }

        if (ok)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
