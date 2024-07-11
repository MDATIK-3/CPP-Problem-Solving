#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int n, long long l, long long r, vector<long long>& cards) {
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + cards[i];
    }
    
    vector<int> dp(n + 1, 0);
    vector<int> next(n + 1, n + 1);
    
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = dp[i + 1];
        int j = next[i + 1];
        while (j <= n && prefix_sum[j] - prefix_sum[i] <= r) {
            if (prefix_sum[j] - prefix_sum[i] >= l) {
                dp[i] = max(dp[i], 1 + dp[j]);
            }
            j++;
        }
        next[i] = j - 1;
    }
    
    return dp[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long l, r;
        cin >> n >> l >> r;
        
        vector<long long> cards(n);
        for (int i = 0; i < n; i++) {
            cin >> cards[i];
        }
        
        cout << solve(n, l, r, cards) << '\n';
    }
    
    return 0;
}