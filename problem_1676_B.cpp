#include <iostream>
#include <set>
using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    int arr[n];
    int i, count = 0, sum = 0;

    // taking input an array
    for (i = 0; i < n; i++)
        cin >> arr[i];

    int min = arr[0]; // minimize

    // find the minimum number from array
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    // add that extra number from min
    for (i = 0; i < n; i++)
    {
        if (min < arr[i])
            sum += arr[i] - min;
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }
    return 0;
}
