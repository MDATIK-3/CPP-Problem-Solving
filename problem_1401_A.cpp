#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    ll n, k;
    cin >> n >> k;
    if (k > n)
        cout << k - n << endl;
    else if (n % 2 == k % 2)
        cout << 0 << endl;
    else
        cout << 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        MUKU();
    }
    return 0;
}