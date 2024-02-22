#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;
/*
int Vowel(string str)
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
*/

void MUKU()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count = 0;
        else
            count++;
        if (count == 4)
            break;
    }
    if (count == 4)
        no;
    else
        yes;
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
