#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    if (n < 8)
        cout << "LESS" << endl;
    else if (n == 8)
        cout << "PERFECT" << endl;
    else
        cout << "MORE" << endl;
}

int main()
{

    MUKU();

    return 0;
}