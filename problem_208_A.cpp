#include <iostream>
#include <string>

using namespace std;

void MUKU() {
    string str, str2;
    cin >> str;
    int len = str.length();
    int i = 0; 
    
    while (i < len) {
        if (i + 2 < len && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
            i += 3;  // "WUB"
            if (!str2.empty() && str2.back() != ' ')
                str2 += ' ';  
        } else {
            str2 += str[i];
            i++;
        }
    }

    cout << str2 << endl;
}

int main() {
    MUKU();
    return 0;
}
