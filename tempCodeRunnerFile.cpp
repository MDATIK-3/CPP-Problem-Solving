// Muthada Chammak Challo
#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;
/*
int Vowel(string str)
{
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
}
*/
int j = 1;
void MUKU()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n], brr[n] = {0};
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        brr[i] = brr[i - 1] + arr[i];
    }

    cout << "Case " << j << ":\n";
    while (q--)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        cout << brr[t2] - brr[t1 - 1] << endl;
    }
    j++;
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
