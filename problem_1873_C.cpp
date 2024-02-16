
#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int arr[10][10];
    string str;
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = min(min(i, j), min(10 - 1 - i, 10 - 1 - j)) + 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> str;
        for (int j = 0; j < 10; j++)
        {
            if (str[j] == 'X')
                sum += arr[i][j];
        }
    }
    cout << sum << endl;
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
