#include <iostream>
#include <string>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

void MUKU()
{
    string str;
    cin >> str;
    int flag = 1, len = str.length();

    for (int i = 0; i < len - 1; i++)
    {
        char current = str[i];
        char next = str[i + 1];
        if (current == 'n' || isVowel(current))
        {

            if (i == len - 2)
            {
                if (isVowel(next) || next == 'n')
                    continue;
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        else
        {
            if (isVowel(next))
                continue;
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if ((len == 1) && (isVowel(str[0]) || str[0] == 'n') || (len > 1) && flag)
        yes;
    else
        no;
}

int main()
{
    MUKU();

    return 0;
}
