#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    string str;
    cin >> str;
    int countA = 0, countB = 0;
    for (int i = 0; i < 5; i++)
    {
        if (str[i] == 'A')
            countA++;
        else
            countB++;
    }
    if (countA > countB)
        cout << 'A' << endl;
    else
        cout << 'B' << endl;
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
