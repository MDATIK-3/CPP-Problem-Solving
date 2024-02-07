#include <iostream>
#include <string>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n, count1 = 2, count2 = 2, max1 = 0, max2 = 0;
    string str;
    cin >> n;
    cin >> str;
 
    for (int i = 1; i < n; i++)
    {
        if (str[i - 1] == str[i] && str[i] == '<')
            count1++;
        if (str[i - 1] == str[i] && str[i] == '>')
            count2++;
        if (count1 > max1)
            max1 = count1;
        if (count2 > max2)
            max2 = count2;
    }
    if (max1 >= max2)
        cout << max1 << endl;
    else
        cout << max2 << endl;
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
