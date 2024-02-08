#include <iostream>
#include <string>

using namespace std;

void MUKU()
{
    long long int sum = 0;
    int x, y;
    cin >> x >> y;
    int count = 0;
    int i = x;
    while (y > 0)
    {
        if (i % 2)
        {
            sum += i;
            y--;
        }
        i++;
    }
    cout << sum << endl;
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
