#include <iostream>
#include <climits>
#include <cmath>

#define ll long long int

using namespace std;

void MUKU(int t)
{
    ll sum = 0; // Initialize sum to 0
    for (int i = 1; i <= t; i++)
    {
        sum += i * i;
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        MUKU(t);
        cin >> t; // Read next value of t
    }
    return 0;
}
