#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

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

class Solution
{
public:
    int minChanges(int n, int k)
    {
        if ((n & k) != k)
            return -1;

        int res = 0;
        while (n > 0 && k != n)
        {
            if ((n & 1) == 1)
            {
                if ((k & 1) == 0)
                    res++;
            }
            k >>= 1;
            n >>= 1;
        }
        return res;
    }
};
void MUKU()
{
    int n, m, k;
    string str;
    cin >> n >> m;
    int i = 1;
    while (1)
    {

        if (i % 2 == 1)
        {
            if (n >= i)
                n -= i;
            else
            {
                cout << "Bob" << endl;
                return;
            }
        }
        else
        {
            if (m >= i)
                m -= i;
            else
            {
                cout << "Limak" << endl;
                return;
            }
        }
        i++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        MUKU();

    return 0;
}



