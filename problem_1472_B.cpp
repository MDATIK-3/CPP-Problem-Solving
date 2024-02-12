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
    int n;
    cin >> n;
    int arr[n], oddCount = 0, evenCount = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
            oddCount++;
        else
            evenCount++;
        sum += arr[i];
    }
    if ((oddCount % 2 == 0 && evenCount % 2 == 0) || (oddCount % 2 == 0 && evenCount == 0) || (evenCount % 2 == 0 && oddCount == 0) || (evenCount > 0 && oddCount > 0 && sum % 2 == 0))
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
