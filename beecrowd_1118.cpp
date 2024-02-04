#include<iostream>
using namespace std;

int main() {
    int x;
    long int y, p = 1;

    
    cin >> x;
    cin >> y;

  
    for(int i = 1; i <= y; i = i + x) {
        for(int j = i; j <= i + x - 1 && j <= y; j++) {
          if(j % x != 0){
              cout << j << " ";
          }
          else
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
