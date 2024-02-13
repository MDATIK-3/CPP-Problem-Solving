#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

void MUKU()
{
    int num;
    cin >> num;
    map<int, int> mp;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    
    int mx = 0;
    for (auto pr : mp)
    {
        mx = max(mx, pr.second);
    }
    cout << mx << endl;
}

int main()
{

    /* int t;
     cin >> t;
     while (t--)*/
    MUKU();

    return 0;
}
