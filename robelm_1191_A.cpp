#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int y;
    cin >> y;
    int rem = y % 4;
    if (rem == 0)
        cout << 1 << " " << 'A' << endl;
    else if (rem == 1)
        cout << 0 << " " << 'A' << endl;
    else if (rem == 2)
        cout << 1 << " " << 'B' << endl;
    else
        cout << 2 << " " << 'A' << endl;
    return 0;
}
