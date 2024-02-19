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
    int count = 0;
    for (int i = 1; i < len; i++)
    {
        if (str[i - 1] == 'A' && str[i] == 'B')
        {
            str[i] = 'C';
            count++;
        }
        else if (str[i - 1] == 'B' && str[i] == 'A')
        {
            str[i] = 'B';
            count++;
        }
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
