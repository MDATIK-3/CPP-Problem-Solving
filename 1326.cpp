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

bool primeGen(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void MUKU()
{
    int n, sum = 0;
    cin >> n;
    vector<int> arr(n), brr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        brr[i] += arr[i] + sum;
        sum = max(sum, brr[i]);
    }
    for (int i = 0; i < n; i++)
        cout << brr[i] << " ";
    cout << endl;
}

int main()
{
    fastio();
    MUKU();

    return 0;
}
