#include <iostream>
#include <algorithm>

#define ll long long int

using namespace std;

void MUKU(int n)
{
    ll arr[22], brr[22], crr[22];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> brr[i];
        crr[i] = arr[i] + brr[i] * 20;
    }
    ll max_val = *max_element(crr, crr + n);
    int index = find(crr, crr + n, max_val) - crr;
    cout << index + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU(22); 
    }
    return 0;
}
