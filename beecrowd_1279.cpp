#include <iostream>
using namespace std;

int main()
{
    int year;
    bool B = false;
    

    while (cin >> year)
    {
        if (B)
            cout << endl;
        B = true;
        int a=0;

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << "This is leap year." << endl;
            a = 1;
        }
        if (year % 15 == 0)
        {
            cout << "This is huluculu festival year." << endl;
            a = 1;
        }
        if (year % 55==0 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
            cout << "This is bulukulu festival year." << endl;
        if(a==0)
        {
            cout << "This is an ordinary year." << endl;
        }
    }

    return 0;
}
