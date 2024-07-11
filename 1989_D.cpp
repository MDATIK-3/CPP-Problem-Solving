#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 998244353;

long long pow_mod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

vector<long long> factorial, inv_factorial;

void precompute_factorials(int n) {
    factorial.resize(n + 1);
    inv_factorial.resize(n + 1);
    factorial[0] = inv_factorial[0] = 1;
    for (int i = 1; i <= n; i++) {
        factorial[i] = (factorial[i-1] * i) % MOD;
    }
    inv_factorial[n] = pow_mod(factorial[n], MOD - 2, MOD);
    for (int i = n - 1; i > 0; i--) {
        inv_factorial[i] = (inv_factorial[i+1] * (i+1)) % MOD;
    }
}

long long nCr(int n, int r) {
    if (r > n) return 0;
    return (((factorial[n] * inv_factorial[r]) % MOD) * inv_factorial[n-r]) % MOD;
}

long long solve(int n, int k) {
    if (k > n) return 0;
    long long result = 0;
    for (int i = 0; i < k; i++) {
        long long term = nCr(n - k + 1, i);
        if (i % 2 == 0) result = (result + term) % MOD;
        else result = (result - term + MOD) % MOD;
    }
    return result%MOD;
}

int main() {
    int n, k;
    cin >> n >> k;
    precompute_factorials(n);
    cout << solve(n, k) << endl;
    return 0;
}