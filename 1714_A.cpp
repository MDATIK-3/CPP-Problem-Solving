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
    int n, h, m;
    cin >> n >> h >> m;
    int time = 60 * h + m;
    int ans = 60 * 24;
    for (int i = 0; i < n; i++)
    {
        cin >> h >> m;
        int t = (60 * h + m - time);
        if (t < 0)
            t += 60 * 24;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
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
