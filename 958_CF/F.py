#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;
const int MAXN = 701;

long long dp[MAXN][MAXN][MAXN];
long long fact[MAXN], inv_fact[MAXN];

long long pow_mod(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

void precompute() {
    fact[0] = inv_fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
        inv_fact[i] = pow_mod(fact[i], MOD - 2);
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

    dp[1][1][1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= i; k++) {
                dp[i][j][k] = (dp[i-1][j-1][k] + dp[i-1][j][k-1]) % MOD;
                if (j < i && k < i) {
                    dp[i][j][k] = (dp[i][j][k] + dp[i-1][j][k] * (i - 2)) % MOD;
                }
            }
        }
    }

    vector<long long> result(n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= i; k++) {
                for (int z = 0; z <= i - 1; z++) {
                    long long ways = (dp[i][j][k] * fact[i-1] % MOD) * inv_fact[z] % MOD * inv_fact[i-1-z] % MOD;
                    long long cost = (1LL * a[j-1] * b[k-1] % MOD) * c[z] % MOD;
                    result[i-1] = (result[i-1] + ways * cost) % MOD;
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