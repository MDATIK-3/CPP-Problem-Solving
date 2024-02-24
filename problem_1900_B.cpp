#include<bits/stdc++.h>
using namespace std;

#define ll long long int

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void MUKU()
{
    int a, b, c;
    int x, y, z;
    cin >> a >> b >> c;
    (abs(b - c) % 2 == 0) ? x = 1 : x = 0;
    (abs(a - c) % 2 == 0) ? y = 1 : y = 0;
    (abs(a - b) % 2 == 0) ? z = 1 : z = 0;
    cout << x << " " << y << " " << z << endl;
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
