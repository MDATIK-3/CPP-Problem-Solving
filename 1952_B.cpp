#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void muku() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> arr1(n);
        for (int i = 0; i < n; ++i)
            cin >> arr1[i];

        unordered_map<int, int> freqMap1;
        vector<int> arr2(m);
        for (int i = 0; i < m; ++i) {
            cin >> arr2[i];
            freqMap1[arr2[i]]++;
        }

        unordered_map<int, int> freqMap2;
        int ans = 0;
        for (int i = 0; i < m; ++i)
            freqMap2[arr1[i]]++;

        int cur = 0;
        for (auto it : freqMap2) {
            int val = it.first;
            if (freqMap1.find(val) != freqMap1.end()) {
                cur += min(freqMap2[val], freqMap1[val]);
            }
        }
        if (cur >= k) {
            ans++;
        }

        if (n == m) {
            cout << ans << endl;
            continue;
        }

        for (int i = 0; i < n - m; ++i) {
            if (arr1[i] != arr1[i + m]) {
                cur -= min(freqMap2[arr1[i]], freqMap1[arr1[i]]);
                cur -= min(freqMap2[arr1[i + m]], freqMap1[arr1[i + m]]);

                freqMap2[arr1[i]]--;
                freqMap2[arr1[i + m]]++;

                cur += min(freqMap2[arr1[i]], freqMap1[arr1[i]]);
                cur += min(freqMap2[arr1[i + m]], freqMap1[arr1[i + m]]);
            }
            if (cur >= k) {
                ans++;
            }
        }

        cout << ans << endl;
    }
}

int main() {
    muku();
    return 0;
}
