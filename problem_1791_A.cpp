#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int i = 0, x = 0, y = 0;
        bool flag = false;
        int size = str.length() + 1;

        while (n >= i)
        {
            if (str[i] == 'U')
                y++;
            if (str[i] == 'D')
                y--;
            if (str[i] == 'R')
                x++;
            if (str[i] == 'L')
                x--;

            if (x == 1 && y == 1)
            {
                flag = true;
                break;
            }

            i++;
        }

        cout << ((flag) ? "YES" : "NO") << endl;
    }

    return 0;
}
