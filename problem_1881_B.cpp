#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void MUKU()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    if ((arr[1] % arr[0] == 0 && arr[2] % arr[0] == 0) && (((arr[1] / arr[0]) - 1 + (arr[2] / arr[0]) - 1) <= 3))
    {
        yes;
    }
    else if (arr[0] == arr[1] && arr[1] == arr[2])
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
