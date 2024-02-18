#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    string str1, str2;
    cin >> str1;
    str2 = str1;
    int len = str1.length();
    int count = 0;
    if (len == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 1; i < len; i ++)
    {
        if (str1[i] != str1[i - 1])
        {
            swap(str1[i], str1[i - 1]);
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
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
