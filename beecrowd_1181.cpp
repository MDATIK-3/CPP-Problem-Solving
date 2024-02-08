#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    double num[12][12], sum = 0;
    char s;
    int n;
    cin >> n >> s;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> num[i][j];
            if (n == i)
                sum += num[i][j];
        }
    }
    double avr = sum / 12;

    if (s == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    if (s == 'M')
        cout << fixed << setprecision(1) << avr << endl;
}

int main()
{

    MUKU();

    return 0;
}
