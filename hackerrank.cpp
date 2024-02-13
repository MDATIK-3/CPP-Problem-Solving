#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ll long long int
using namespace std;

void MUKU()
{
    int a, b;
    cin >> a >> b;
    for (int num = a; num <= b; num++)
    {
        if (num == 1)
            cout << "one" << endl;
        if (num == 2)
            cout << "two" << endl;
        if (num == 3)
            cout << "three" << endl;
        if (num == 4)
            cout << "four" << endl;
        if (num == 5)
            cout << "five" << endl;
        if (num == 6)
            cout << "six" << endl;
        if (num == 7)
            cout << "seven" << endl;
        if (num == 8)
            cout << "eight" << endl;
        if (num == 9)
            cout << "nine" << endl;
        if (num % 2 && num > 9)
            cout << "odd" << endl;
        else if (num % 2 == 0 && num > 9)
            cout << "even" << endl;
    }
}

int main()
{

    /* int t;
     cin >> t;
     while (t--)*/
    MUKU();

    return 0;
}
