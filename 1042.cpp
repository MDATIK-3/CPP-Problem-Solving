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
    int n, C1 = 0, C0 = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        (str[i] == '0') ? C0++ : C1++;
    }
    if (C0 == n)
        cout << 0 << endl;
    else if (C1 == n || C1 == 1)
        cout << 1 << endl;
    else if (C0 == C1)
        cout << C1 << endl;
    else if (C0 < C1)
    {
        cout << C0 + 1 << endl;
    }
    else if (C0 > C1)
        cout << C1 << endl;
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
