#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long int
using namespace std;

void MUKU()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    string str;
    cin >> str;
    int result = 0;
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        result += arr[str[i] - '1'];
    }

    cout << result << endl;
}

int main()
{
    /*int t;
    cin >> t;
    while (t-- > 0)*/
    MUKU();
    return 0;
}
