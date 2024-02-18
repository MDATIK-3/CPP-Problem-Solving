#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n, count = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n ; i++)
    {
        if (str[i] == '.')
            continue;
        else if (str[i] == '*' && str[i + 1]=='*')
            break;
        else if (str[i] == '@')
            count++;
    }
    cout << count << endl;
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
