#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 5e5 + 5;

struct SegmentTree {
    vector<long long> tree, lazy;
    int n;

    SegmentTree(int size) : n(size) {
        tree.resize(4 * n);
        lazy.resize(4 * n);
    }

    void push(int node, int l, int r) {
        if (lazy[node] != 0) {
            tree[node] += (r - l + 1) * lazy[node];
            if (l != r) {
                lazy[2 * node] += lazy[node];
                lazy[2 * node + 1] += lazy[node];
            }
            lazy[node] = 0;
        }
    }

    void update(int node, int l, int r, int ql, int qr, long long val) {
        push(node, l, r);
        if (l > qr || r < ql) return;
        if (ql <= l && r <= qr) {
            lazy[node] += val;
            push(node, l, r);
            return;
        }
        int mid = (l + r) / 2;
        update(2 * node, l, mid, ql, qr, val);
        update(2 * node + 1, mid + 1, r, ql, qr, val);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    long long query(int node, int l, int r, int ql, int qr) {
        push(node, l, r);
        if (l > qr || r < ql) return 0;
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        return query(2 * node, l, mid, ql, qr) + query(2 * node + 1, mid + 1, r, ql, qr);
    }

    void update(int ql, int qr, long long val) { update(1, 0, n - 1, ql, qr, val); }
    long long query(int ql, int qr) { return query(1, 0, n - 1, ql, qr); }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1), pos(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        SegmentTree st(n + 1);
        vector<long long> result(n + 1);
        long long total = 0;

        for (int x = n; x >= 1; x--) {
            int i = pos[x];
            long long left = st.query(1, i - 1);
            long long right = st.query(i + 1, n);
            long long contribution = x * (1LL * i * (n - i + 1) - left - right);
            total += contribution;
            st.update(i, n, i);
        }

        for (int x = 1; x <= n; x++) {
            int i = pos[x];
            long long left = st.query(1, i - 1);
            long long right = st.query(i + 1, n);
            result[i] = total - x * (1LL * i * (n - i + 1) - left - right);
        }

        for (int i = 1; i <= n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}