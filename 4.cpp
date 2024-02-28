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
long long min_value_of_f(int N) {
    long long sum_of_minimums = 0;
    int sorted_permutation[N];
    for (int i = 0; i < N; ++i)
        sorted_permutation[i] = i + 1;

    for (int i = 0; i < N; ++i)
        sum_of_minimums += (i % 2 == 0) ? sorted_permutation[i] : sorted_permutation[i - 1];

    return sum_of_minimums;
}
void MUKU()
{
    int n, sum = 0;
    cin >> n;
    cout<<min_value_of_f(n)<<endl;
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
