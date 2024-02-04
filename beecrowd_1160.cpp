#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, count = 0;
        double r1, r2;
        cin >> a >> b >> r1 >> r2;
        while (a <= b)
        {
            a += a * (r1 / 100);
            b += b * (r2 / 100);
            count++;
            if (count > 100)
            {
                cout << "Mais de 1 seculo.\n";
                break;
            }
        }

        if (count <= 100)
            cout << count << " anos.\n";
    }
    return 0;
}
