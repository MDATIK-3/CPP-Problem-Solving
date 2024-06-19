#include <iostream>
#include <cassert>
using namespace std;

void muku() {
    int n;
    int a = 0, b = 0; 
    
    cin >> n;
    assert(1 <= n);
    assert(n <= 100000);
    
    if (n == 1 || n == 2 || n == 4) {
        cout << 2 << endl;
        return;
    }
    
    int arr[n];
    arr[0] = 0;
    for (int i = 1; i < n; i++)
        arr[i] = -1;
    
    arr[4 % n] = 1;
    int temp = 4 % n;
    
    for (int i = 2; i <= n + 2; i++) {
        if (arr[(temp * 10 + 4) % n] != -1) {
            a = i;
            b = arr[(temp * 10 + 4) % n];
            break;
        } else {
            arr[(temp * 10 + 4) % n] = i;
            temp = (temp * 10 + 4) % n;
        }
    }
    
    cout << 2 * a - b << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        muku();
    return 0;
}
