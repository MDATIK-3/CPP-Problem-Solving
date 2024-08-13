#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "yes" << endl
#define no cout << "no" << endl

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

long long mod_pow(long long base, long long exp, long long mod)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
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

const int MAXN = 110;
bool visited[MAXN];
vector<int> adj[MAXN];
stack<int> topostk;

void dfs(int v)
{
    visited[v] = true;
    for (int i = 0; i < adj[v].size(); i++)
    {
        int w = adj[v][i];
        if (!visited[w])
            dfs(w);
    }
    topostk.push(v);
}

void topoSort(int n)
{
    vector<int> result;

    while (!topostk.empty())
    {
        result.push_back(topostk.top());
        topostk.pop();
    }

    for (int i = 0; i < result.size(); ++i)
    {
        if (i > 0)
            cout << " ";
        cout << result[i];
    }
    cout << endl;
}

void MUKU()
{
    while (1)
    {
        ll n, temp;
        cin >> n;
        if (n < 1)
            return;
        temp = sqrt(n);
        (n == temp * temp) ? yes : no;
    }
}

int main()
{
    fastio();

    // int t;
    // cin >> t;
    // while (1)
    MUKU();
    return 0;
}
