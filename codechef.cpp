#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int arr[3] = {a, b, c};
        sort(arr, arr + 3);

        int a = arr[0], b = arr[1], c = arr[2];

        int increments = 5;
        while (increments > 0) {
            if (a <= b && a <= c) {
                a++;
            } else if (b <= a && b <= c) {
                b++;
            } else {
                c++;
            }
            increments--;
        }

        cout << a * b * c << endl;
    }
    return 0;
}



