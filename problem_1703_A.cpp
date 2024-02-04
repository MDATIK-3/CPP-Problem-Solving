#include <iostream>

#define telepathy return 0;
using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i, count = 0, frequency[256] = {0};
    for (i = 0; str[i] != '\0'; i++)
    {
        frequency[str[i]]++;
    }
    for (i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
        {
            count += frequency[i] + 1;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }
    telepathy;
}