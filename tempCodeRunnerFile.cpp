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
    vector<int> last_valid(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1]; 
        
        int left = last_valid[i - 1];
        int right = i;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long sum = prefix_sum[i] - prefix_sum[mid - 1];
            
            if (sum >= l && sum <= r) {
                dp[i] = max(dp[i], dp[mid - 1] + 1);
                last_valid[i] = mid;
                left = mid + 1;
            } else if (sum < l) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }
    
    return dp[n];
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