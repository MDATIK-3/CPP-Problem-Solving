#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 998244353

using namespace std;

struct DPArrays {
    vector<long long> f1, f2, w1, w2;
};

DPArrays calculate_DP_arrays(const vector<int>& a) {
    int n = a.size();
    DPArrays dp;
    dp.f1.resize(n + 1, 0);
    dp.f2.resize(n + 1, 0);
    dp.w1.resize(n + 1, 0);
    dp.w2.resize(n + 1, 0);

    dp.f1[1] = max(a[0], abs(a[0]));
    dp.f2[1] = min(a[0], abs(a[0]));

    if (a[0] >= 0) {
        dp.w1[1] = 2;
        dp.w2[1] = 2;
    } else {
        dp.w1[1] = 1;
        dp.w2[1] = 1;
    }

    for (int i = 2; i <= n; ++i) {
        dp.f1[i] = max({
            dp.f1[i - 1] + a[i - 1],
            abs(dp.f1[i - 1] + a[i - 1]),
            dp.f2[i - 1] + a[i - 1],
            abs(dp.f2[i - 1] + a[i - 1])
        });

        if (dp.f1[i] == dp.f1[i - 1] + a[i - 1]) {
            dp.w1[i] = (dp.w1[i] + dp.w1[i - 1]) % MOD;
        }
        if (dp.f1[i] == abs(dp.f1[i - 1] + a[i - 1])) {
            dp.w1[i] = (dp.w1[i] + dp.w1[i - 1]) % MOD;
        }
        if (dp.f1[i - 1] != dp.f2[i - 1]) {
            if (dp.f1[i] == dp.f2[i - 1] + a[i - 1]) {
                dp.w1[i] = (dp.w1[i] + dp.w2[i - 1]) % MOD;
            }
            if (dp.f1[i] == abs(dp.f2[i - 1] + a[i - 1])) {
                dp.w1[i] = (dp.w1[i] + dp.w2[i - 1]) % MOD;
            }
        }

        dp.f2[i] = min({
            dp.f1[i - 1] + a[i - 1],
            abs(dp.f1[i - 1] + a[i - 1]),
            dp.f2[i - 1] + a[i - 1],
            abs(dp.f2[i - 1] + a[i - 1])
        });

        if (dp.f2[i] == dp.f1[i - 1] + a[i - 1]) {
            dp.w2[i] = (dp.w2[i] + dp.w1[i - 1]) % MOD;
        }
        if (dp.f2[i] == abs(dp.f1[i - 1] + a[i - 1])) {
            dp.w2[i] = (dp.w2[i] + dp.w1[i - 1]) % MOD;
        }
        if (dp.f1[i - 1] != dp.f2[i - 1]) {
            if (dp.f2[i] == dp.f2[i - 1] + a[i - 1]) {
                dp.w2[i] = (dp.w2[i] + dp.w2[i - 1]) % MOD;
            }
            if (dp.f2[i] == abs(dp.f2[i - 1] + a[i - 1])) {
                dp.w2[i] = (dp.w2[i] + dp.w2[i - 1]) % MOD;
            }
        }
    }

    return dp;
}

int main() {
    int q;
    cin >> q;

    vector<int> results;

    for (int _ = 0; _ < q; ++_) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        DPArrays dp = calculate_DP_arrays(a);

        results.push_back(dp.w1[n]);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}