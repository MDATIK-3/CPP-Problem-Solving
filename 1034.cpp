#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)



void MUKU()
{
    string s;
    cin >> s;
    int n = s.size();
    int count = 1;
    int t = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            continue;
        else
            count++;
        if (s[i - 1] == '0' && s[i] == '1')
            t = 1;
    }
    int result = count - t;
    cout << result << endl;
}

int main()
{
    fastio();

    int t;
    cin >> t;

    while (t-- > 0)
    {
        MUKU();
    }

    return 0;
}
