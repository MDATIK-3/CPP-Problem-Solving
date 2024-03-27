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
    int a, b, sum = 0;
    cin >> a >> b;
    if (a - b >= 10)
        cout << 0 << endl;
    else
    {
        sum = 10 - (a - b);
     sum = ceil(static_cast<double>(sum) / 3);
        cout << sum << endl;
    }
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
