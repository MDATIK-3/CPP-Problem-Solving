#include <iostream>
#include <string>
#include <iomanip>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void MUKU()
{
    double sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += (double)(1.0 / i);
    }
    cout << fixed << setprecision(2) << sum << endl;
}

int main()
{
    MUKU();
    return 0;
}
