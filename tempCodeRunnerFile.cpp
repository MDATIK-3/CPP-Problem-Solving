#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    ll arr[n], brr[n], crr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> brr[i];
    }
    crr[0] = max(arr[0], brr[0]);
    for (int i = 1; i < n; i++)
    {
        ll x = max(arr[i], brr[i]);
        ll y = min(arr[i], brr[i]);
        if (x <= crr[i - 1])
            crr[i] = x;
        if (y <= crr[i - 1])
            crr[i] = y;
    }
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (crr[i - 1] < crr[i])
        {
            flag = false;
            break;
        }
    }
    (flag) ? yes : no;
}

int main()
{

    MUKU();

    return 0;
}
