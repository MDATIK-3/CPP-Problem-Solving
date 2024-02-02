#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
       // long long int d = a + b + c - 1;
        long long int e = max(a,b);
        long long int d = max(e,c);
        cout << d << endl;
    }
    return 0;
}
