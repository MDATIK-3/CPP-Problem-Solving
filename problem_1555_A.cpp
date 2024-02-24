#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void MUKU()
{
    ll a;
    cin >> a;
    a = max(6ll, a);
    if (a % 2)
    {
        a += 1;
        cout << a / 2 * 5 << endl;
    }
    else
    {
        cout << a / 2 * 5 << endl;
    }
}

int main()
{
    fastio();

    int t;
    cin >> t;

    while (t-- > 0)
    {
        MUKU();
    }

    return 0;
}
