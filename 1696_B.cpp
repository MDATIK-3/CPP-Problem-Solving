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
    int n, count = 0;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            count++;
    }
    if (n == count)
    {
        cout << 0 << endl;
        return;
    }
    int seg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            continue;
        if (i == n - 1 or arr[i + 1] == 0)
            seg++;
    }
    (seg == 1) ? cout << 1 : cout << 2;
    cout << endl;
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
