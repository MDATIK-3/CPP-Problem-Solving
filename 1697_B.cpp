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

bool primeGen(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void MUKU()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n), brr(n + 1);
    for (ll i = 0; i < n; i++)
     cin >> arr[i];
    
    sort(arr.begin(), arr.end());

    for (ll i = 1; i <= n; i++)
    {
        brr[i] = brr[i - 1] + arr[i-1];
    }

    while (q--)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        cout <<brr[n-t1+t2] - brr[n-t1]  << endl;
    }
}
int main()
{
    fastio();

    MUKU();

    return 0;
}
