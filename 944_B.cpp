#include <iostream>
using namespace std;

void problemD() {
    string s; 
    cin >> s;
    int n = s.size();
    int count = 1;
    int target = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i - 1])
            continue;
        else
            count++;
        if(s[i - 1] == '0' && s[i] == '1')
            target = 1;
    }
    int res = count - target;
    cout << res << endl;
}

int main() {
    int t;
    cin >>t;
    while (t--)
    {
           problemD();

    }
    
    return 0;
}
