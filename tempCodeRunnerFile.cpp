#include <iostream>
#include <string>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void MUKU()
{
    string str, str2;
    cin >> str;
    int len = str.length();
    int max1 = 0, count1 = 0, max0 = 0, count0 = 0;
    for (int i = 1; i < len; i++)
    {
        if ((str[i] == '1' && str[i - 1] == '1') || (str[i] == '0' && str[i - 1] == '0'))
        {
            count1++;
            if (max1 < count1)
                max1 = count1;
            else
                count1 = 0;
        }
    }
    (max1 >= 7) ? yes : no;
}

int main()
{
    MUKU();
    return 0;
}
