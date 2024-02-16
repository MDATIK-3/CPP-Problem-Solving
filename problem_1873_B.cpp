#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n;
    ll sum = 1;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minArr = *min_element(arr.begin(), arr.end());
    bool incremented = false;
    for (int i = 0; i < n; i++)
    {
        if (minArr == arr[i] && !incremented)
        {
            arr[i] += 1;
            incremented = true;
        }
        sum *= arr[i];
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
