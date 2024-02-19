#include <iostream>
#include <vector>

using namespace std;

vector<int> digitSums;

void RESULT(int n) {
    digitSums.resize(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        int num = i;
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        digitSums[i] = digitSums[i - 1] + sum;
    }
}

void MUKU() {
    int n;
    cin >> n;

    cout << digitSums[n] << endl;
}

int main() {
    int t;
    cin >> t;

    RESULT(1000000); 

    while (t--) {
        MUKU();
    }

    return 0;
}
