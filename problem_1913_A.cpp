#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    string str, str1, str2;
    cin >> str;
    int len = str.length();
    str1 = str.substr(0, 1);

    for (int i = 1; i < len; i++)
    {
        if (str[i] == '0' && str2.empty())
        {
            str1 += str[i];
        }
        else
        {
            str2 += str[i];
        }
    }
    int num1 = stoi(str1);
    int num2 = stoi(str2);
    if (num1 < num2)
        cout << num1 << " " << num2 << endl;
    else
        cout << -1 << endl;
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
