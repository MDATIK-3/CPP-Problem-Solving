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

bool primeGen(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void MUKU()
{
    int n, c1 = 0, c2 = 0;
    cin >> n;
    string str;
    cin >> str;
    int maxCount = 0;
    string result;
    for (int i = 0; i < n - 1; i++)
    {
        int count = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (str[j] == str[i] && str[j + 1] == str[i + 1]) count++;
        }
        if (maxCount < count)
        {
            maxCount = count;
            result = str.substr(i, 2);
        }
    }
    cout << result << endl;
}

int main()
{
    fastio();

    MUKU();

    return 0;
}
