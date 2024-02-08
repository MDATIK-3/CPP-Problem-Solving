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
    int max = 1, count = 1;
    for (int i = 1; i < len; i++)
    {
        if (str[i] == str[i - 1])
        {
            count++;
            if (count > max)
                max = count;
        }
        else
            count = 1;
    }
    if (max >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    MUKU();
    return 0;
}
