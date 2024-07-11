#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool check(const vector<int>& a, long long x, int k) {
    int count = 0;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = i + 1; j < a.size(); ++j) {
            if ((a[i] ^ a[j]) <= x) {
                ++count;
            }
            if (count >= k) return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long left = 0, right = (1LL << 31) - 1; // maximum possible XOR value
        while (left < right) {
            long long mid = (left + right) / 2;
            if (check(a, mid, k)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        cout << left << endl;
    }
    return 0;
}
