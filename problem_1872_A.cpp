#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t > 0)
    {
        int a, b, c;
        int p = 1;
        int count = 0;
        cin >> a >> b >> c;
        int x = max(a, b);
        int y = min(a, b);

        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {

            int result = ceil((x - y) / (2.0 * c));
            cout << result << endl;
        }

        t--;
    }

    return 0;
}
