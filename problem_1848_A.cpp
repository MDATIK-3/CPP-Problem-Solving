#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n, m, k, x, y;
    cin >> n >> m >> k;
    cin >> x >> y;

    int arr[k], brr[k];
    bool flag = true;
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i] >> brr[i];
        if ((x + y) % 2 == (arr[i] + brr[i]) % 2)
            flag = false;
    }
    (flag) ? yes : no;
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
