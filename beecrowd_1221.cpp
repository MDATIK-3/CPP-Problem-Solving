#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int count = 0;
        long p;
        scanf("%ld", &p);

        if (p < 2) {
            cout << "Not Prime\n";
            continue;
        }

        if (p == 2) {
            cout << "Prime\n";
            continue;
        }

        for (int j = 2; j < sqrt(p) + 1; j++) {
            if (p % j == 0)
                count++;
            if (count == 2)
                break;
        }

        (count >= 1) ? cout << "Not Prime\n" : cout << "Prime\n";
    }

    return 0;
}
