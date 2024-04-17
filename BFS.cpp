#include <bits/stdc++.h>
using namespace std;

void dfs(list<int> g[], int v, vector<bool>& visited) {
    visited[v] = true;
    cout << v << " ";

    for (auto i : g[v]) {
        if (!visited[i]) {
            dfs(g, i, visited);
        }
    }
}

void bfs(list<int> g[], int root, int n) {
    vector<bool> visited(n + 1, false);
    queue<int> q;
    visited[root] = true;
    q.push(root);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        cout << v << " ";

        for (auto i : g[v]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int n, m, u, v;
    cin >> n >> m;
    list<int> g[n + 1];

    // Read the edges and build the adjacency list representation of the graph
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); // Skip in case of directed graph
    }

    vector<bool> visited(n + 1, false);

    cout << "DFS traversal: ";
    // Call the DFS function starting from each unvisited node
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(g, i, visited);
        }
    }

    cout << "\nBFS traversal: ";
    // Call the BFS function
    bfs(g, 1, n);

    return 0;
}
