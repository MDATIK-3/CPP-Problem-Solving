#include <iostream>
using namespace std;

int main()
{
    int a, b;

    while ((cin >> a >> b))
    {
        long long int sum1 = 1, sum2 = 1, sum = 1;

        for (int i = 1; i <= a; i++)
            sum1 *= i;
        for (int i = 1; i <= b; i++)
            sum2 *= i;

        sum = sum1 + sum2;
        cout << sum << endl;
    }

    return 0;
}
