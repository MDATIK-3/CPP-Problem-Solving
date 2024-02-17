#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    int size = 2 * n;
    vector<ll> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll sum = 0;
    for (int i = 1; i < size; i = i + 2)
    {
        sum += min(arr[i - 1], arr[i]);
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
