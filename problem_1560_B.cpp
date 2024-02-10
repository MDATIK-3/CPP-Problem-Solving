#include <iostream>
#include <string>
#include <cmath>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long int
using namespace std;

void MUKU()
{
    ll a, b, c, n, d;
    cin >> a >> b >> c;
    n = 2 * abs(a - b);
    if (a > n || a < 0 || b > n || b < 0 || c > n || c < 0)
        cout << -1 << endl;
    else
    {
        if (c + n * 0.5 <= n)
            cout << static_cast<ll>(c + n * 0.5) << endl;
        else
            cout << static_cast<ll>(c - n * 0.5) << endl;
    }
}


int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
        MUKU();
    return 0;
}
