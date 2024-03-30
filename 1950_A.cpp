#include <iostream>
#include <cmath>

using namespace std;

bool isBinary(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

string canRepresentAsProduct(int n) {
    if (isBinary(n))
        return "YES";

    while (n % 11 == 0) {
        n /= 11;
    }

    if (!isBinary(n))
        return "NO";

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return "NO";
    }

    return "YES";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << canRepresentAsProduct(n) << endl;
    }

    return 0;
}
