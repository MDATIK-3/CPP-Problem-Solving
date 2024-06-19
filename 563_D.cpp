#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int countNonEmptyStrings(string s) {
    int n = s.length();
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    int count = 0;
    for (int d : divisors) {
        string t = s.substr(0, d);
        bool valid = true;
        for (int i = 0; i < n; i += d) {
            if (s.substr(i, d) != t && s.substr(i, d) != "a") {
                valid = false;
                break;
            }
        }
        if (valid && t != "a") {
            ++count;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << countNonEmptyStrings(s) << endl;
    }
    return 0;
}
