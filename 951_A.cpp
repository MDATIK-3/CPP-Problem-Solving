#include <bits/stdc++.h>
#define ll long long int
#define y cout << "YES" << endl
#define n cout << "NO" << endl
#define fio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

const int MOD = 1e9 + 7;


int count_trailing_zeros(int num) {
    if (num == 0) return 32; 
    int count = 0;
    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }
    return count;
}

void change_variables() {
    int a, b;
    cin >> a >> b;

    int z = a ^ b;
    int result = 1 << count_trailing_zeros(z);

    cout << result << endl;
}

int main() {
    fio();

    int tests;
    cin >> tests;
    while (tests-- > 0) {
        change_variables();
    }

    return 0;
}
