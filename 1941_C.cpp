#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

void MUKU()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'm' && str[i + 1] == 'a' && str[i + 2] == 'p' && str[i + 3] == 'i' && str[i + 4] == 'e')
        {
            count++;
            i += 3;
        }

        else if (str[i] == 'm' && str[i + 1] == 'a' && str[i + 2] == 'p')
            count++;
        else if (str[i] == 'p' && str[i + 1] == 'i' && str[i + 2] == 'e')
            count++;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }

    return 0;
}
