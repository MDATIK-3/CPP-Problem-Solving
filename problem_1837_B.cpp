#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n, count = 1, maximum = 1;
    string str;
    cin >> n;
    cin >> str;

    for (int i = 1; i < n; i++)
    {
        if (str[i - 1] == str[i])
            {count++;
        maximum = max(count, maximum);}
        else
            count=1;
    }
    cout << maximum+1 << endl;
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
