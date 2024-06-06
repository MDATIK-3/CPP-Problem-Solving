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

const int MOD = 1e9 + 7;

ll factorial(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; ++i)
    {
        res = (res * i) % MOD;
    }
    return res;
}

void MUKU()
{
    ll n, x;
    cin >> n >> x;
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        freq[a]++;
    }

     for (int i = 1; i < x; i++) {
        if (freq.count(i) && freq[i] % (i + 1) == 0) {
            freq[i + 1] += (freq[i] / (i + 1));
            freq[i] = 0;
        }
    }

    for (int i = 1; i < x; i++) {
        if (freq.count(i) && freq[i] != 0) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

int main()
{
    fastio();
    MUKU();

    return 0;
}
