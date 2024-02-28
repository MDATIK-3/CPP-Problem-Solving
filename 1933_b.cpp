#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

/*int Vowel(string str)
{
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
}*/
ll DIV(ll a, ll b)
{
    return (a + b - 1) / b;
}
void MUKU()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] == 1 || arr[i] % 3 == 1)
            flag = true;
    }
    int rem = sum % 3;
    if (rem == 0)
        cout << 0 << endl;
    else if (rem == 2 || flag)
        cout << 1 << endl;

    else
        cout << 2 << endl;
}

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }

    return 0;
}
