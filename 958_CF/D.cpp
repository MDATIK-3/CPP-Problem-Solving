#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

const int MAXN = 300005;
vector<int> adj[MAXN];
ll a[MAXN];
ll sum_subtree[MAXN];
ll max_attack_subtree[MAXN];
ll max_attack_edge[MAXN];

void dfs(int v, int p) {
    sum_subtree[v] = a[v];
    max_attack_subtree[v] = a[v];
    max_attack_edge[v] = 0;
    
    for (int u : adj[v]) {
        if (u == p) continue;
        dfs(u, v);
        sum_subtree[v] += sum_subtree[u];
        max_attack_subtree[v] = max(max_attack_subtree[v], max_attack_subtree[u]);
        max_attack_edge[v] = max(max_attack_edge[v], a[u]);
    }
}

void MUKU() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        adj[i].clear();
    }
    
    for (int i = 0; i < n - 1; ++i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    dfs(1, -1);
    
    ll total_attack = sum_subtree[1];
    ll min_health_decrement = total_attack;
    
    vector<ll> max_attack_sorted;
    for (int i = 2; i <= n; ++i) {
        max_attack_sorted.push_back(max_attack_subtree[i]);
    }
    sort(max_attack_sorted.begin(), max_attack_sorted.end());
    
    for (int i = 0; i < min(101, (int)max_attack_sorted.size()); ++i) {
        ll current_round_decrement = total_attack - max_attack_sorted[i];
        min_health_decrement = min(min_health_decrement, current_round_decrement);
    }
    
    cout << min_health_decrement << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        MUKU();
    }
    
    return 0;
}
