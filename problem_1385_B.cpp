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
}*/

void MUKU()
{
    int n;
    cin >> n;
    vector<int> arr(2 * n);
    vector<int> brr;
    unordered_set<int> uniqueSet;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
        if (uniqueSet.find(arr[i]) == uniqueSet.end())
        {
            uniqueSet.insert(arr[i]);
            brr.push_back(arr[i]);
        }
    }

    for (int num : brr)
    {
        cout << num << " ";
    }
    cout << endl;
}


int main()
{
    fastio();

    int t;
    cin >> t;

    while (t-- > 0)
    {
        MUKU();
    }

    return 0;
}
