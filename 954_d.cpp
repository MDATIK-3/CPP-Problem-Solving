#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>

void processArray(int testCase) {
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for(auto &i : arr) cin >> i;
    
    map<int, set<int>> freqMap;
    for(int x : arr) {
        if(freqMap[x % k].find(x)!= freqMap[x % k].end()) {
            freqMap[x % k].erase(x);
        } else {
            freqMap[x % k].insert(x);
        }
    }
    
    int count = 0, remainder = -1;
    for(auto &x : freqMap) {
        int size = x.second.size();
        if(size % 2) {
            count++;
            remainder = x.first;
        }
    }
    
    if(count > 1) {
        cout << -1 << endl;
        return;
    }
    
    int result = 0;
    for(auto &x : freqMap) {
        if(x.first == remainder) continue;
        while(x.second.size() > 0) {
            int b = *x.second.begin();
            x.second.erase(b);
            if(x.second.size() == 0) break;
            int tp = *x.second.begin();
            x.second.erase(tp);
            result += (tp - b) / k;
        }
    }
    
    if(count) {
        vi v;
        for(int x : freqMap[remainder]) v.push_back(x);
        int m = v.size();
        if(m == 1) {
            cout << result << endl;
            return;
        }
        vi prefix(m, 0), suffix(m, 0);
        prefix[1] = v[1] - v[0];
        for(int i = 3; i < m; i += 2) {
            prefix[i] = v[i] - v[i - 1] + prefix[i - 2];
        }
        suffix[m - 2] = v[m - 1] - v[m - 2];
        for(int i = m - 4; i >= 0; i -= 2) {
            suffix[i] = v[i + 1] - v[i] + suffix[i + 2];
        }
        int temp = LLONG_MAX;
        for(int i = 0; i < m; i += 2) {
            int x = 0;
            if(i > 0) x += prefix[i - 1];
            if(i + 1 < m) x += suffix[i + 1];
            temp = min(temp, x);
        }
        result += temp / k;
    }
    cout << result << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        processArray(i);
    }
    
    return 0;
}