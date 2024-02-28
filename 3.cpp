#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;

        int p = 0, q = 0;
        int temp_l = l;

        // Calculate the highest power of a and b that divides l
        while (temp_l % a == 0) {
            temp_l /= a;
            p++;
        }
        while (temp_l % b == 0) {
            temp_l /= b;
            q++;
        }

        // Number of distinct possible values of k
        int distinct_k_values = min(p, q) + 1;

        cout << distinct_k_values << endl;
    }

    return 0;
}
