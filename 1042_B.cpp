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

void MUKU()
{
    int a, b, c, d, e;
    int x = 0, y = 0, z = 0;
    cin >> a >> b >> c >> d >> e;
    if (a <= e)
        x = a;
    if (b <= e)
        y = b;
    if (c <= e)
        z = c;
    int p = max(x, y);
    p = max(p, z);
    ((a + b + c - p) <= d && p) ? yes : no;
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
