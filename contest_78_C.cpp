#include <iostream>
#include <string>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

//Not correct ans
void MUKU()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (!(n % 2))
        cout << "Marsel" << endl;
    else
    {
        if (n * k < m)
            cout << "Timur" << endl;
        else
            cout << "Marsel" << endl;
    }
}

int main()
{
    MUKU();
    return 0;
}
