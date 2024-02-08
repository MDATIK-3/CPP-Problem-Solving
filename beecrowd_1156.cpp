#include <iostream>
#include <string>
#include <iomanip>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void MUKU()
{
    double sum = 1, p = 2;
    for (double i = 3; i <= 39; i = i + 2)
    {

        sum += (i / p);
        // cout << i / p << endl;
        p = p * 2;
    }
    cout << fixed << setprecision(2) << sum << endl;
}

int main()
{
    MUKU();
    return 0;
}
