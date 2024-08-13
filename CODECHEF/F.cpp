#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int dfs(int index, int remaining, vector<pair<int, int>>& rectangles, vector<vector<int>>& dp) {
    if (remaining <= 0) return 0;
    if (index == rectangles.size()) return INF;
    
    if (dp[index][remaining] != -1) return dp[index][remaining];
    
    int& result = dp[index][remaining];
    result = INF;
    
    // Skip this rectangle
    result = min(result, dfs(index + 1, remaining, rectangles, dp));
    
    int width = rectangles[index].first;
    int height = rectangles[index].second;
    
    // Color columns
    for (int i = 1; i <= width; i++) {
        result = min(result, i * height + dfs(index + 1, remaining - i, rectangles, dp));
    }
    
    // Color rows
    for (int i = 1; i <= height; i++) {
        result = min(result, i * width + dfs(index + 1, remaining - i, rectangles, dp));
    }
    
    return result;
}

int solve(int n, int k, vector<pair<int, int>>& rectangles) {
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    int result = dfs(0, k, rectangles, dp);
    return result == INF ? -1 : result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<pair<int, int>> rectangles(n);
        for (int i = 0; i < n; i++) {
            cin >> rectangles[i].first >> rectangles[i].second;
        }
        
        cout << solve(n, k, rectangles) << endl;
    }
    
    return 0;
}