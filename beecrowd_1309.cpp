#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void half_bit()
{
    string num1, num2;
    cin >> num1 >> num2;
    string str = num1;

    int len = num1.length();
    int extra = ceil((double)len / 3);
    string str2(extra, ' ');
    int j = extra - 1;

    for (int i = len - 1; i >= 0; i--)
    {
        if ((i + 1) % 3 == 0 && i != len - 1)
        {
            str2[j] = ',';
            --j;
        }
        str2[j] = str[i];
        j--;
    }

    if (num2.length() > 1)
        str2 += "." + num2;
    else
        str2 += ".0" + num2;

    cout << '$' << str2 << endl;
}

int main()
{
    while (1)
    {
    half_bit();
    }
    return 0;
}
