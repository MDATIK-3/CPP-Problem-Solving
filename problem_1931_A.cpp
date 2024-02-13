#include <iostream>
#include <string>
using namespace std;

string findSmallestWord(int targetSum)
{
    string smallestWord = "zzz";

    for (char c1 = 'a'; c1 <= 'z'; ++c1)
    {
        for (char c2 = 'a'; c2 <= 'z'; ++c2)
        {
            for (char c3 = 'a'; c3 <= 'z'; ++c3)
            {
                int sum = c1 - 'a' + 1 + c2 - 'a' + 1 + c3 - 'a' + 1;
                if (sum == targetSum)
                {
                    string currentWord = string(1, c1) + string(1, c2) + string(1, c3);
                    if (currentWord < smallestWord)
                    {
                        smallestWord = currentWord;
                    }
                }
            }
        }
    }

    return smallestWord;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int targetSum;

        cin >> targetSum;

        string smallestWord = findSmallestWord(targetSum);

        cout << smallestWord << endl;
    }
    return 0;
}
