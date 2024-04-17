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
}

ll DIV(ll a, ll b)
{
    return (a + b - 1) / b;
}*/

void MUKU()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> result;
    while (b > a)
    {
        if (b % 2 == 0)
        {
            result.push_back(b);
            b /= 2;
        }
        else if (b % 10 == 1)
        {
            result.push_back(b);
            b /= 10;
        }
        else
        {
            no;
            return;
        }
    }
    result.push_back(a);
    reverse(result.begin(), result.end());
    if (b == a)
    {

        yes;
        cout << result.size() << endl;
        for (ll x : result)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        no;
    }
}

int main()
{
    fastio();

    MUKU();

    return 0;
}
