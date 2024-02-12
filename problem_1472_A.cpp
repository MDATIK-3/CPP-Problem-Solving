#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long int
using namespace std;

void MUKU()
{
    ll w, h, n;
    cin >> w >> h >> n;
    if (w % 2 && h % 2 && n > 1)
        no;
    else if (w % 2 && h % 2 && n == 1)
        yes;
    else
    {
        int count = 1;
        int p = 1;
        while (p)
        {
            if (w % 2 == 0)
            {
                w /= 2;
                count *= 2;
            }
            if (h % 2 == 0)
            {
                h /= 2;
                count *= 2;
            }
            if (!(h % 2) && !(w % 2))
            {
                h /= 2;
                count *= 2;
            }
            if (((h % 2) && (w % 2)) || count>= n)
            {
                p = 0;
            }
        }
        if (count>= n)
            yes;
        else
            no;
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
