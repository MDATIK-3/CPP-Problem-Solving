#include <iostream>
#include <vector>
using namespace std;

int maxOperations(vector<int>& a, int n) {
    int operations = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == i) {
            operations++;
            a.erase(a.begin() + i);
            a.erase(a.begin() + (i - 1));
            n -= 2;
            i = 0;  // Reset index to check from the start again
        }
    }
    return operations;
}

void MUKU() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << maxOperations(a, n) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        MUKU();
    }

    return 0;
}
