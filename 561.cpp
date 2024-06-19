#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        long long m1 = 0, m2 = 0;
        for (int i = 0; i < n; ++i) {
            m2 += nums[i];
            m1 = max(m1 + nums[i], abs(m1 + nums[i]));
            if (abs(m2) > m1) {
                m1 = abs(m2);
            }
        }

        cout << m1 << endl;
    }
    return 0;
}
