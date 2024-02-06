#include <iostream>
#include <climits>
#include <cmath>

#define ll long long int

using namespace std;

void MUKU()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << char(j + 97);
        }
    }
    cout << endl;
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
