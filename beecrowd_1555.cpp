#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c;
        cin >> a >> b;
        long int r1 = (3 * a) * (3 * a) + b * b;
        long int r2 = 2 * (a * a) + (5 * b) * (5 * b);
        long int r3 = -100 * a + b * b * b;
        long int e = max(r1, r2);
        long int d = max(e, r3);
        if (d == r1)
            cout << "Rafael ganhou" << endl;
        else if (d == r2)
            cout << "Beto ganhou" << endl;
        else
            cout << "Carlos ganhou" << endl;
    }
    return 0;
}
