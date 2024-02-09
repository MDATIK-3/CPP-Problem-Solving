#include <iostream>
#include <string>

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    int arr[n], count = 0, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = abs(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    if (n == 1)
        cout << arr[0] << endl;
    else
        cout << min << endl;
}

int main()
{

    MUKU();
    return 0;
}
