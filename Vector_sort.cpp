#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ll long long int
using namespace std;

void MUKU()
{
    int num;
    cin >> num;
    vector<ll> vec;
    for (int i = 0; i < num; i++)
    {
        ll x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    for (auto pr : vec)
    {
        cout << pr << " ";
    }
    cout << endl;
}

int main()
{

    /* int t;
     cin >> t;
     while (t--)*/
    MUKU();

    return 0;
}
