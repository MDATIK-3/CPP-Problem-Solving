
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void MUKU()
{
    int num;
    cin >> num;
    string sSTR = "zzz";
    for (char c1 = 'a'; c1 <= 'z'; c1++)
    {
        for (char c2 = 'a'; c2 <= 'z'; c2++)
        {
            for (char c3 = 'a'; c3 <= 'z'; c3++)
            {
                int cSUM = c1 - 'a' + 1 + c2 - 'a' + 1 + c3 - 'a' + 1;
                if (cSUM == num)
                {
                    string cSTR = string(1, c1) + string(1, c2) + string(1, c3);
                    if (cSTR < sSTR)
                        sSTR = cSTR;
                }
            }
        }
    }
    cout << sSTR << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        MUKU();

    return 0;
}
