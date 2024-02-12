#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    if (n % 2)
    {
        for (int i = 0; i < n; i++)
            cout << "2 ";
        cout << endl;
    }
    else
    {
        cout << "1 3 ";
        for (int i = 2; i < n; i++)
            cout << "2 ";
        cout << endl;
    }
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
