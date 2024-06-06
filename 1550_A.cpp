#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

///////////////////////////////////////////////////////
//                                                   //
//  Nickname: Atik                                   //
//  University: Green University of Bangladesh       //
//  Country: Bangladesh                              //
//  City: Narayanganj                                //
//  CodeForces: codeforces.com/profile/md.atik       //
//                                                   //
//  Language: C++                                    //
//  Compiler: gnu g++                                //
//  Editor: VS Code                                  //
//                                                   //
///////////////////////////////////////////////////////

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
const int MOD = 1e9 + 7;

ll factorial(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; ++i)
    {
        res = (res * i) % MOD;
    }
    return res;
}

vector<int> isPrime(int n)
{
    vector<int> primes;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

vector<int> computePrefixSum(const vector<int> &nums)
{
    int n = nums.size();
    vector<int> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
    }

    return prefixSum;
}
class Solution
{
public:
    string reverseStr(string s, int k)
    {
        int n = s.length();
        string str = "";

        int i = 0, j = 0;
        if (n < k)
        {
            for (int p = n - 1; p >= 0; p--)
            {
                str += s[p];
            }
            return str;
        }
        while (i < n)
        {
            if (j % 2 == 0)
            {
                for (int p = i + k - 1; p >= i; p--)
                {
                    if (p < n)
                        str += s[p];
                }
            }
            else
            {
                for (int p = i; p <= k + i - 1; p++)
                    if (p < n)
                        str += s[p];
            }
            i += k;
            j++;
        }
        return str;
    }
};
class Solution
{
public:
    int numMatchingSubseq(string s, vector<string> &words)
    {
        int sl = 0, tl = 0, count=0;
        int s_l2 = s.length(), t_l2 = words.size();
        while (t_l2 > tl)
        {
            while (s_l2 > sl)
            {
                if (s[sl] == t[tl])
                {
                    sl++;
                }
                tl++;
            }
        }
        return (s_l2 - tl == 0);
    }
};

void MUKU()
{
    int s;
    cin >> s;
    int init = ceil(sqrt(s));
    cout << init << endl;
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
