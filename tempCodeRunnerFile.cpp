#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

/*int Vowel(string str)
{
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
}
ll DIV(ll a, ll b)
{
    return (a + b - 1) / b;
}*/

class Solution
{
public:
    int lengthOfLastWord(string str)
    {
        int len = str.length();
        int max_len = 0;
        int count = 0;
        bool foundWord = false;

        for (int i = len - 1; i >= 0; i--)
        {
            if (str[i] != ' ')
            {
                count++;
                foundWord = true;
            }
            else if (foundWord)
            {
                break;
            }
        }
        return count;
    }
};


void MUKU()
{
   cout<<"print safety"<<endl;
}

int main()
{
    fastio();


        MUKU();
    

    return 0;
}
