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
    string str;
    cin >> str;
    int len = str.length();
    if (len < 7)
    {
        no;
        return;
    }
    int c1 = 0, c0 =0, p = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '1')
            p++;
       else if (str[i] == '0' && p)
            {

                c0++;
                if (c0 >= 6)
                    break;
            }
        else
            c0 = 0;
    }
    for (int i = len - 7; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            c1 = 1;
            break;
        }
    }
    (c0 >= 6 && c1) ? yes : no;
}

int main()
{
    fastio();
    /*
        int t;
        cin >> t;

        while (t-- > 0)*/
    MUKU();

    return 0;
}
