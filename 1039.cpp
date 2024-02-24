#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void MUKU()
{
    int n, sum = 0;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        m[num]++;
    }

    int max_freq = 0;
    for (auto &p : m)
    {
        sum += p.second;
        max_freq = max(max_freq, p.second);
    }

    int result = sum - max_freq;
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
