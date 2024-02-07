#include <iostream>
#include <string>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int count[3] = {0};
    string str;
    for (int i = 0; i < 3; i++)
    {
        getline(cin, str);
        int len = str.length();
        for (int j = 0; j < len; j++)
        {
            if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
                count[i]++;
        }
    }
    if (count[0] == 5 && count[1] == 7 && count[2] == 5)
        yes;
    else
        no;
}

int main()
{
    MUKU();
    return 0;
}
