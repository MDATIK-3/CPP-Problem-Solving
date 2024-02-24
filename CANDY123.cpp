// Muthada Chammak Challo
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
    int a, b;
    cin >> a >> b;
    int c1 = 0, c2 = 0, i = -1, j = 0;
    for (int i = 1; true; i++)
    {
        if (i % 2)
        {
            a -= i;
            if (a < 0)
            {
                cout << "Bob" << endl;
                return;
            }
        }
        else
        {
            b -= i;
            if (b < 0)
            {
                cout << "Limak" << endl;

                return;
            }
        }
    }
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
