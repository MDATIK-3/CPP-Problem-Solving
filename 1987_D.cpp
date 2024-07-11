/**
 *    author:  tourist
 *    created: 30.06.2024 17:40:59
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt; // Read the number of test cases
  while (tt--) {
    int n;
    cin >> n; // Read the number of cakes
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i]; // Read the tastiness of each cake
    }
    sort(a.begin(), a.end()); // Sort the cakes by tastiness
    
    // Prepare the next greater element array
    vector<int> nxt(n + 1);
    nxt[n] = n;
    for (int i = n - 1; i >= 0; i--) {
      if (i < n - 1 && a[i + 1] != a[i]) {
        nxt[i] = i + 1;
      } else {
        nxt[i] = nxt[i + 1];
      }
    }
    
    const int inf = int(1e9); // Define a large value for initialization
    vector<vector<int>> f(n + 1, vector<int>(n + 1, inf));
    
    // Base case: no moves needed starting from the end
    for (int j = 0; j <= n; j++) {
      f[n][j] = 0;
    }
    
    // Fill the DP table
    for (int i = n - 1; i >= 0; i--) {
      for (int j = 0; j <= n; j++) {
        f[i][j] = f[nxt[i]][min(n, j + 1)] + 1;
        if (j > 0) {
          f[i][j] = min(f[i][j], f[i + 1][j - 1]);
        }
      }
    }
    
    // Output the result for the current test case
    cout << f[0][0] << '\n';
  }
  return 0;
}
