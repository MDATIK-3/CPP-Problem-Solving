
#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    ll arr[n], brr[n], minX = 10e9, maxY = 0, x = 10e9, y = 0, ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> brr[i];
        minX = min(arr[i], minX);
        maxY = max(brr[i], maxY);

        if (arr[i] < x || brr[i] > y)
        {
            x = arr[i];
            y = brr[i];
            ans = i + 1;
        }
    }
    if (x <= minX && y >= maxY)
        cout << ans << endl;
    else
        cout << -1 << endl;
}

int main()
{

    MUKU();

    return 0;
}
