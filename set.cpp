#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int, greater<int>> myset = {1, 2, 3, 2, 2, 21, 233, 211, 30};
    myset.insert(0);
    for (int x : myset)
    {
        cout << x << " ";
    }
    cout << endl;
}