#include <iostream>
#include <climits>
#include <cmath>

#define ll long long int

using namespace std;

void MUKU()
{
    int n;
    string str;
    cin >> n;
    cin >> str;
    int min1, min2;

    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == 'B')
        {
            min1 = i + 1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
        {
            min2 = i + 1;
            break;
        }
    }
    int result = abs(min2 - min1) + 1;
    cout << result << endl;
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
