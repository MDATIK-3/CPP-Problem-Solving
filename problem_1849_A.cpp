#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = min(a-1, b+c)*2+1;
        cout << d << endl;
    }
    return 0;
}
