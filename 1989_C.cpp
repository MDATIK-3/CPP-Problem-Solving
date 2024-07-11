#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, testCases;
vector<long> a, b;
long A, B;
string ans;

void input() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
}

void solve(int t) {
    A = 0L;
    B = 0L;

    int like = 0;
    int disLike = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            if (a[i] == 1) {
                ++like;
            } else if (a[i] == -1) {
                --disLike;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            continue;
        }

        if (a[i] > b[i]) {
            A += a[i];
        } else if (b[i] > a[i]) {
            B += b[i];
        }
    }

    if (A > B) {
        swap(A, B);
    }

    long count = like;
    long canAdd = min(B - A, count);

    A += canAdd;
    count -= canAdd;
    canAdd = count / 2;
    count -= canAdd;

    A += max(count, canAdd);
    B -= min(count, canAdd);

    if (A > B) {
        swap(A, B);
    }

    count = disLike;
    canAdd = max(A - B, count);

    B += canAdd;
    count -= canAdd;

    canAdd = count / 2;
    count -= canAdd;

    A += max(count, canAdd);
    B += min(count, canAdd);

    ans += to_string(min(A, B));
    if (t != testCases) {
        ans += "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> testCases;

    for (int t = 1; t <= testCases; ++t) {
        input();
        solve(t);
    }

    cout << ans;

    return 0;
}
