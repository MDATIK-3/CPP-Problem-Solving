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
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
            arr[i] = 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "X[" << i << "] = " << arr[i] << endl;
    }
}

int main()
{

    MUKU();

    return 0;
}
