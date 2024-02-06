#include <iostream>
#include <climits>
#include <cmath>

#define ll long long int

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    
   
    ll sum = (1LL << n) / 12000; 

    cout << sum << " kg" << endl;
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
