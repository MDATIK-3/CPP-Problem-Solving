#include <iostream>
#include <set>
using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i, count = 0;
    set<string> myset;
    for (i = 0; i < n; i++) 
    {
        myset.insert(str.substr(i, 2)); 
    }
    cout << myset.size()-1 << endl;
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
