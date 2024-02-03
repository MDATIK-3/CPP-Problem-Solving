#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int y;
    cin >> y;

    while (y-- > 0)
    {
        int a, b;
        cin >> a >> b;
        int distance = (a * a + b * b);
        int d = (int)(sqrt(distance));

        if (a == 0 && b == 0)
            cout << 0 << endl;
        else if (distance == (d * d))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
