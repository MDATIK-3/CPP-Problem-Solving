#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    string str;
    cin >> str;
    int len = str.length();
    int c0 = 0, c1 = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '0')
            c0++;
        else
            c1++;
    }
    if (min(c0, c1) % 2)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
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
