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
    int num;
    cin >> num;
    ll arr[num];
    for (int i = 0; i < num; i++)
        cin >> arr[i];
    sort(arr, arr + num);
    ll result = arr[num - 1] - arr[0];
    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
        MUKU();
    return 0;
}
