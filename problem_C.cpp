#include <iostream>
#include <vector>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

vector<int> sum;

void MUKU() {
    int n;
    cin >> n;

    cout << sum[n] << endl;
}

void RESULT(int n) {
    sum.resize(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        int num = i;
        int digitSum = 0;
        while (num > 0) {
            digitSum += num % 10;
            num /= 10;
        }
        sum[i] = sum[i - 1] + digitSum;
    }
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
