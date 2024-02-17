
#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n, k, count = 0;
    cin >> n >> k;
    string str;
    cin >> str;
    int i = 0;
    while (i < n)
    {
        if (str[i] == 'B')
        {
            count++;
            i += k;
            continue;
        }
        i++;
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
