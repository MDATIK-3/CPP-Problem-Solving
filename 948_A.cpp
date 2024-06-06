#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

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
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if ((arr[i][j] == 'S' && arr[i][j + 1] == 'W' && j < m - 1) || (arr[i][j] == 'S' && arr[i][j - 1] == 'W' && j > 0) || (arr[i][j] == 'S' && arr[i + 1][j] == 'W' && i < n) || (arr[i][j] == 'S' && arr[i - 1][j] == 'W' && i > 0))
            {
                no;
                return;
            }

            if (arr[i][j] == '.')
                arr[i][j] = 'D';
        }
    }
    yes;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    fastio();

    MUKU();

    return 0;
}
