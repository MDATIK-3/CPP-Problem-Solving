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
    int n;
    cin >> n;
    vector<ll> arr(n);
    int x = -1, y = -1, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            if (x == -1)
                x = i;
            y = i;
        }
    }
    if (x == -1 || y == -1)
    {
        cout << 0 << endl;
        return;
    }
    int count = 0;
    for (int i = x; i <= y; i++)
    {
        if (arr[i] == 0)
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
