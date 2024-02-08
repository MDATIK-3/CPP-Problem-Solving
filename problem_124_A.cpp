#include <iostream>
#include <string>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void MUKU()
{
    int n, a, b;
    cin >> n >> a >> b;
    int result = min(n - a, b+1);//standing in front b+1 or standing behind n-a
    cout << result << endl;
}

int main()
{
    MUKU();
    return 0;
}
