#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void MUKU()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n + 1), brr(n + 1);
    arr[0] = brr[0] = 0;

    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        brr[i] = brr[i - 1] + arr[i];
    }

    static int j = 1;
    cout << "Case " << j << ":\n";

    while (q--)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        cout << brr[t2] - brr[t1 - 1] << endl;
    }

    j++;
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
