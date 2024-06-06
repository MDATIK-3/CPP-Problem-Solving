#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) { // Pass by value
    return a.second < b.second;
}

bool check(int a, int b) {
    return (a ^ b) < 4;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<pair<int, int>> indices;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            indices.push_back({arr[i], i});
        }
        
        sort(indices.begin(), indices.end());

        vector<int> visited(n, 0);

        for (int i = 0; i < n; ++i) {
            if (visited[i]) continue;
            vector<int> cycle;
            int j = i;
            while (!visited[j]) {
                cycle.push_back(j);
                visited[j] = 1;
                j = lower_bound(indices.begin(), indices.end(), make_pair(arr[j], j), compare) - indices.begin();
            }
            
            int mini = arr[cycle[0]], idx = cycle[0];
            for (int k = 1; k < cycle.size(); ++k) {
                if (mini > arr[cycle[k]]) {
                    mini = arr[cycle[k]];
                    idx = cycle[k];
                }
            }
            
            for (int k = 0; k < cycle.size(); ++k) {
                arr[cycle[k]] = mini;
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
