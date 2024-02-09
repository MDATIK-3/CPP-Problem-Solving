#include <iostream>
#include <string>
#include <cmath>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long int
using namespace std;

void MUKU()
{
    ll num;
    cin >> num;

    if (num % 2 == 0)
        cout << num / 2 << endl;
    else
        cout << (num / 2) + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
        MUKU();
    return 0;
}
