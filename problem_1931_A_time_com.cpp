#include <iostream>
#include <string>

using namespace std;

void MUKU() {
    int num;
    cin >> num;
    
    if (num <= 26 * 3) {
        int c1 = max(1, num - 26 * 2);
        int c3 = min(26, num - c1 - 1);
        int c2 = num - c1 - c3;

        cout << char('a' + c1 - 1) << char('a' + c2 - 1) << char('a' + c3 - 1) << endl;
    } else {
        cout << "zzz" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
        MUKU();

    return 0;
}
