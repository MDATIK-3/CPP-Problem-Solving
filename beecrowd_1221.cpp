#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        long int a;
        cin >> a;
        int count = 0;
        if (a < 2)
        {
            cout << "Not Prime" << endl;
            continue;
        }
        if (a == 2)
        {
            cout << "Prime" << endl;
            continue;
        }
        for (int i = 2; i <= sqrt(a) ; i++)
        {
            if (a % i == 0)
                count++;
            if (count == 2)
                break;
        }

        if (count >= 1)
            cout << "Not Prime" << endl;
        else
            cout << "Prime" << endl;
        n--;
    }
    return 0;
}