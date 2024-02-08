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
    int num;
    int sum = 0;
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        cout << num << " eh perfeito" << endl;
    else
        cout << num << " nao eh perfeito" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }
    return 0;
}
