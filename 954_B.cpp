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
void dfs(int v)
{
    visited[v] = true;
    for (int i = 0; i < adj[v].size(); i++)
    {
        int w = adj[v][i];
        if (!visited[w])
            dfs(w);
    }
}

void before_dfs()
{
    int n, m, x, y, sol;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            sol++;
        }
    }

    cout << sol << endl;
}

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

void cal(vector<vector<ll>> &arr, ll n, ll m)
{
    for (ll i = 0; i < m + 2; i++)
    {
        arr[0][i] = 0;
        arr[n + 1][i] = 0;
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            bool flag = true;
            for (int k = 0; k < 4; k++)
            {
                ll ni = i + dx[k];
                ll nj = j + dy[k];
                if (arr[i][j] <= arr[ni][nj])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ll Max = -1;
                for (int k = 0; k < 4; k++)
                {
                    ll ni = i + dx[k];
                    ll nj = j + dy[k];
                    Max = max(Max, arr[ni][nj]);
                }
                arr[i][j] = Max;
            }
        }
    }
}
void MUKU()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n + 2, vector<ll>(m + 2, 0));

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
            cin >> arr[i][j];
    }

    cal(arr, n, m);

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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
