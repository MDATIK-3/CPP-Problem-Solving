#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

class Solution
{
public:
    int maxDepth(string str)
    {
        int count = 0;
        int maximum = 0;
        int len = str.length();
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '(')
            {
                count++;
                maximum = max(maximum, count);
            }
            else if (str[i] == ')')
            {
                count--;
            }
        }
        return maximum;
    }
};

void MUKU()
{
    ll a, b;
    cin >> a >> b;
    ll result = a / b;
    cout << result;
}

int main()
{

    MUKU();

    return 0;
}