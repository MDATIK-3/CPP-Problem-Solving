#include <iostream>
using namespace std;
int main()
{
    int k, w;
    long long int n, sum = 0;
    cin >> k;
    cin >> n;
    cin >> w;
    for (int i = 1; i <= w; i++)
    {
        sum += (i * k);
    }
    if(sum>n)
    cout << sum - n<<endl;
    else
    cout <<0<< endl;
    return 0;
}