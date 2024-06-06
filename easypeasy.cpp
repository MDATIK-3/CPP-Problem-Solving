#include <iostream>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
        {
            ll result = abs(a - b) / 2;
            cout << result << endl;
        }
        else if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
        {
            ll result = (abs(a - b) + 1) / 2;
            cout << result << endl;
        }
        else if (a % 2 == 1 && b % 2 == 1)
        {
            ll result = (abs(a - b) + 2) / 2;
            cout << result << endl;
        }
    }
}
