#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        string a, b;
        int carry = 0, count = 0;
        cin >> a >> b;
        int lenA = a.length();
        int lenB = b.length();

        if (lenA < lenB)
        {
            cout << "nao encaixa" << endl;
            continue;
        }
        else
        {
            int i = lenA - 1, j = lenB - 1;  // Start from the last character

            while (i >= 0 && j >= 0)
            {
                if (a[i] == b[j])
                {
                    count++;
                }
                i--;
                j--;
            }

            if (count != lenB)
                cout << "nao encaixa" << endl;
            else
                cout << "encaixa" << endl;
        }
    }

    return 0;
}
