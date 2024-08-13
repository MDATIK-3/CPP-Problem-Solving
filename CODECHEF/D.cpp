#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        set<int> occupied;
        bool valid = true;
        
        for (int i = 0; i < n; i++) {
            int seat = a[i];
            
            if (i == 0) {
                // The first passenger can sit anywhere
                occupied.insert(seat);
            } else {
                // Check if seat has a neighboring seat that is occupied
                if (occupied.count(seat - 1) == 0 && occupied.count(seat + 1) == 0) {
                    valid = false;
                    break;
                }
                occupied.insert(seat);
            }
        }
        
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
