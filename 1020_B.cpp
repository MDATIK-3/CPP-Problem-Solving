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
ll DIV(ll a, ll b)
{
    return (a + b - 1) / b;
}
void MUKU()
{
    int N, T;
    cin >> N >> T;
    int A[N + 1];

    for (int i = 1; i < N; i++)
    {
        cin >> A[i];
    }
    A[N] = 1;
    bool flag = false;
    int cur = 1;
    while (cur <= N)
    {
        cur += A[cur];
        if (cur == T)
        {
            flag = true;
            break;
        }
    }
    (flag) ? yes : no;
}

int main()
{
    fastio();

    MUKU();

    return 0;
}
