#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;
const int MAXN = 701;

int dp[MAXN][MAXN];
long long fact[MAXN], inv[MAXN], inv_fact[MAXN];

void precompute() {
    fact[0] = inv_fact[0] = inv[1] = 1;
    for (int i = 2; i < MAXN; i++)
        inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = fact[i-1] * i % MOD;
        inv_fact[i] = inv_fact[i-1] * inv[i] % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    dp[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i-1][j-1] + (long long)dp[i-1][j] * (i - 1)) % MOD;
        }
    }

    vector<long long> result(n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= i; k++) {
                long long ways = (long long)dp[i][j] * dp[i][k] % MOD * inv_fact[i] % MOD;
                for (int z = 0; z <= i - 1; z++) {
                    long long ascent_ways = ways * fact[i-1] % MOD * inv_fact[z] % MOD * inv_fact[i-1-z] % MOD;
                    long long cost = (long long)a[j-1] * b[k-1] % MOD * c[z] % MOD;
                    result[i-1] = (result[i-1] + ascent_ways * cost) % MOD;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}