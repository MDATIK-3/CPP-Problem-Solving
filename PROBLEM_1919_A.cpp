#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t > 0)
    {
        long long int a, b;
     
        cin >> a >> b;

        if ((a%2==0 && b%2==0)|| (a%2==1 && b%2==1))
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }

        t--;
    }

    return 0;
}
