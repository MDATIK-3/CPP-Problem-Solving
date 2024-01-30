#include <iostream>
using namespace std;

int main()
{
    int year;

    while (cin >> year)
    {
        if ((year % 4 == 0 && year % 100 == 0) || year % 400 == 0)
        {
            cout << "This is leap year." << endl;
            if (!(year % 15))
                cout << "This is huluculu festival year." << endl;
            if (!(year % 55))
                cout << "This is Bulukulu festival year." << endl;
            cout << endl;
        }
        else if (year % 15 == 0 || year % 55 == 0)
        {
            if (!(year % 15))
                cout << "This is huluculu festival year." << endl;
            if (!(year % 55))
                cout << "This is Bulukulu festival year." << endl;
            cout << endl;
        }
        else
        {
            cout << "This is an ordinary year." << endl;
            cout << endl;
        }
    }

    return 0;
}
