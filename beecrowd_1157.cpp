#include <iostream>
#include <string>

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
}

int main()
{
    MUKU();
    return 0;
}
