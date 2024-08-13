#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    vector<long long> ones;
    for (int i = 0; i < n; ++i) {
        if (b[i] == 1) {
            ones.push_back(a[i]);
        }
    }

    // Sort the array `ones` which can be modified
    sort(ones.begin(), ones.end());

    // Use the available `k` increments
    int m = ones.size();
    if (m > 0) {
        int i = m - 1;
        while (k > 0 && i >= 0) {
            long long increment = min(k, 1000000000LL - ones[i]);
            ones[i] += increment;
            k -= increment;
            --i;
        }
    }

    // Update array `a` based on modified `ones`
    sort(a.begin(), a.end());

    long long median = a[(n - 1) / 2];
    long long max_score = 0;

    for (int i = 0; i < n; ++i) {
        if (b[i] == 1 && !ones.empty()) {
            long long modified_a = ones.back();
            ones.pop_back();
            max_score = max(max_score, modified_a + median);
        } else {
            max_score = max(max_score, a[i] + median);
        }
    }

    cout << max_score << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
