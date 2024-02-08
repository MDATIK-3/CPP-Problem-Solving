#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void MUKU()
{
    double x, arr[101];
    cin >> x;
    arr[0] = x;
    for (int i = 1; i <=100; i++)
    {
        arr[i] = arr[i - 1] / 2.0;
        cout << "N[" << i - 1 << "] = " << fixed << setprecision(4) << arr[i - 1] << endl;
    }
}

int main()
{

    MUKU();

    return 0;
}
