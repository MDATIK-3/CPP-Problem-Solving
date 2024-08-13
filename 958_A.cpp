#include <iostream>
#include <cmath>
using namespace std;

int minOperations(int n, int k) {
    if (n == 1) return 0;  // If n is already 1, no operations are needed

    int operations = 0;
    while (n > 1) {
        if (n <= k) {
            operations++;
            break;
        }
        // Number of full k partitions we can make
        int fullPartitions = n / k;
        n -= fullPartitions * k;
        n += fullPartitions;
        operations += fullPartitions;
        
        // If after full partitions, n is still greater than 1 and less than k,
        // we need one more operation to break it into parts
        if (n > 1 && n < k) {
            operations++;
            break;
        }
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << minOperations(n, k) << endl;
    }
    return 0;
}
