#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

// Function to compute (a^b) % m using fast exponentiation
long long mod_pow(long long a, long long b, long long m) {
    long long res = 1;
    while (b > 0) {
        if (b % 2 == 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return res;
}

long long nCr(int n, int r, int m) {
    if (r > n) return 0;

    // Calculate n! % m
    long long num = 1;
    for (int i = 1; i <= n; ++i) {
        num = (num * i) % m;
    }

    // Calculate r! % m
    long long denom_r = 1;
    for (int i = 1; i <= r; ++i) {
        denom_r = (denom_r * i) % m;
    }

    // Calculate (n-r)! % m
    long long denom_nr = 1;
    for (int i = 1; i <= n - r; ++i) {
        denom_nr = (denom_nr * i) % m;
    }

    // Calculate nCr = num / (denom_r * denom_nr) % m
    long long denom = (denom_r * denom_nr) % m;
    long long result = (num * mod_pow(denom, m - 2, m)) % m;
    
    return result;
}

// Function to handle each test case
void MUKU() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int sum = 0;
    for (int &x : arr) {
        cin >> x;
        sum += x;
    }

    long long res = 0;
    for (int i = (k + 1) / 2; i <= min(k, sum); ++i) {
        res = (res + nCr(sum, i, MOD) * nCr(n - sum, k - i, MOD)) % MOD;
    }
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        MUKU();
    }

    return 0;
}
