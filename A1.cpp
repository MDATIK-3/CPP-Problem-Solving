#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> s(m), l(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> s[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> l[i];
    }

    vector<vector<long long>> dp(m, vector<long long>(n + 1, 0));
    dp[0][0] = 1;

    for (int j = 1; j <= n; ++j)
    {
        for (int i = 0; i < m; ++i)
        {
            dp[i][j] = (s[i] + l[i]) * dp[0][j - 1] % MOD;
            for (int k = 0; k < m; ++k)
            {
                if (k != i)
                {
                    dp[i][j] = (dp[i][j] - (l[i] * dp[k][j - 1]) % MOD + MOD) % MOD;
                }
            }
        }
    }

    long long total_combinations = 0;
    for (int i = 0; i < m; ++i)
    {
        total_combinations = (total_combinations + dp[i][n]) % MOD;
    }

    cout << total_combinations << endl;

    return 0;
}
