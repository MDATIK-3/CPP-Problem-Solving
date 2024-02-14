#include <iostream>
#include <string>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    string str;
    cin >> str;
    int flag = 1, len = str.length();

    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'n')
            continue;
        else
        {
            if (str[i + 1] != 'a' && str[i + 1] != 'e' && str[i + 1] != 'i' && str[i + 1] != 'o' && str[i + 1] != 'u')
            {
                flag = 0;
                break;
            }
        }
    }
    if ((len == 1 && (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' || str[0] == 'n')) || (len>1 && flag))
    {
        yes;
    }
    else
        no;
}

int main()
{
    MUKU();

    return 0;
}
