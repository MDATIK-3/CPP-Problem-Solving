#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n, count = 0;
    cin >> n;
    set<char> str;
    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        str.insert(s);
    }
    if (n != 5)
    {
        no;
        return;
    }
    for (auto it = str.begin(); it != str.end(); ++it)
    {
        if (*it == 'T' || *it == 'm' || *it == 'i' || *it == 'u' || *it == 'r')
            count++;
    }
    (count == 5) ? yes : no;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        MUKU();
    }
    return 0;
}
