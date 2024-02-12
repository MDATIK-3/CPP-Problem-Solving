#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "Ho!" << endl;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << "Ho ";
        }
        cout << "Ho!" << endl;
    }
}

int main()
{

    MUKU();

    return 0;
}
