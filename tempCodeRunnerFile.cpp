#include <iostream>
#include <string>
#include <iomanip>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void MUKU()
{
    double sum = 1;
    for (double i = 2; i <= 40; i = i * 2)
    {

        sum += (i - 1) / i;
    }
    cout << fixed << setprecision(2) << sum << endl;
}

int main()
{
    MUKU();
    return 0;
}
