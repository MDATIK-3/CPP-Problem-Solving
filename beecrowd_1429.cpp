#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;

    while (cin >> t)
    {
        if (t == 0)
        {
            break;
        }
        long long int result = 0;
        int i = 2;
        while (t != 0)
        {
            int temp = t % 10;
            result += temp * tgamma(i);
            i++;
            t /= 10;
        }
        cout<<result <<endl;
    }

    return 0;
}
