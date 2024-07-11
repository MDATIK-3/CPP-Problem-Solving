#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool canBeSumOfLargeNumbers(string x) {
    for (char c : x) {
        int digit = c - '0';
        if (digit < 10 && (digit < 5 || digit > 9)) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    vector<string> results;
    
    while (t--) {
        string x;
        cin >> x;
        if (canBeSumOfLargeNumbers(x)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }
    
    for (const string& result : results) {
        cout << result << endl;
    }
    
    return 0;
}
