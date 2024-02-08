#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

//not appicabile for too long string type data
void MUKU()
{
    int len, num = 0, positon = 0, p = 0;
    string str;
    cin >> str;
    len = str.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            num += pow(2, p);
        }
        p++;
    }
    int arr[num + 3] = {0};
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 3; i <= num + 2; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    if (arr[num + 2] > 99)
    {
        cout << arr[num + 2] << endl;
    }
    else if (arr[num + 2] > 9)
    {
        cout << '0' << arr[num + 2] << endl;
    }
    else if(arr[num + 2] < 9)
        {
            cout << "00" << arr[num + 2] << endl;
        }
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
