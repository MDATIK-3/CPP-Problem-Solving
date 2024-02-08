#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int arr[20], brr[20];

    for (int i = 0, j = 19; i < 20, j >= 0; i++, j--)
    {
        cin >> arr[i];
        brr[j] = arr[i];
    }
    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << brr[i] << endl;
    }
}

int main()
{

    MUKU();

    return 0;
}
