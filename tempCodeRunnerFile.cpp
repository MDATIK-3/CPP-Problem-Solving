#include <iostream>
using namespace std;
int main()
{
    int y;
    cin >> y;

    while (y-- > 0)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    cout << y << endl;
}
