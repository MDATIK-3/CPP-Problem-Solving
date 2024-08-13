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
    cin >> n >> str;
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(str[i], str[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        str[i] = 'a' + ('z' - str[i]);
    }
    cout << str << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        MUKU();

    return 0;
}
