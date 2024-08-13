#include <iostream>
#include <vector>
#include <string>
using namespace std;

int calculateTypingTime(const string& s) {
    int time = 2; // Time to type the first character
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1])
            time += 1;
        else
            time += 2;
    }
    return time;
}

string maximizeTypingTime(string s) {
    int maxTime = 0;
    string bestPassword;

    // Try inserting each letter at each position
    for (char c = 'a'; c <= 'z'; ++c) {
        for (int i = 0; i <= s.length(); ++i) {
            string newPassword = s.substr(0, i) + c + s.substr(i);
            int newTime = calculateTypingTime(newPassword);
            if (newTime > maxTime) {
                maxTime = newTime;
                bestPassword = newPassword;
            }
        }
    }
    
    return bestPassword;
}

int main() {
    int t;
    cin >> t;
    vector<string> results;
    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        results.push_back(maximizeTypingTime(s));
    }

    for (const string& res : results) {
        cout << res << endl;
    }

    return 0;
}
