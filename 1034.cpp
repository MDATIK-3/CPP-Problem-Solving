#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void MUKU()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << 'A' << endl;
    else if (b > a && b > c)
        cout << 'B' << endl;
    else if (c > a && c > b)
        cout << 'C' << endl;
    else
        cout << "NOTA" << endl;
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
