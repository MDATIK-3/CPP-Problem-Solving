#include <iostream>
#include <string>
#include <cmath>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long int
using namespace std;

void MUKU()
{
    ll a, b, c, n, count = 0;
    cin >> a >> b >> c >> n;
    ll max1 = max(a, b);
    ll max2 = max(max1, c);
    count = max2 - a + max2 - b + max2 - c;
    if ((n - count) % 3 == 0 && n>=count)
        yes;
    else
        no;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
        MUKU();
    return 0;
}
