#include <bits/stdc++.h>

const long long MOD = 1000000007;

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;
        
        std::vector<int> l(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> l[i];
        }

        long long ans = 0, curr = 0, max_sum = 0;

        for (int i : l) {
            curr += i;
            if (curr < 0) {
                curr = 0;
            }
            max_sum = std::max(max_sum, curr);
        }

        long long result = (std::accumulate(l.begin(), l.end(), 0LL) + (max_sum * (1LL << k)) - max_sum) % MOD;
        if (result < 0) {
            result += MOD;
        }
        
        std::cout << result << std::endl;
    }

    return 0;
}
