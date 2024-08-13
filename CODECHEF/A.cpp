#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

using namespace std;

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

    for (int i = 2; i * i <= n; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i)
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

vector<int> PrefixSum(const vector<int> &nums)
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
    for (int w : adj[v])
    {
        if (!visited[w])
        {
            dfs(w);
        }
    }
}
vector<ll> arr, brr;
void init(int x)
{
    arr.resize(x + 1);
    brr.resize(x + 1);
    arr[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        arr[i] = (arr[i - 1] * i) % MOD;
    }
}

void before_dfs()
{
    int n, m, x, y, sol = 0;
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    fill(begin(visited), end(visited), false);

    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            dfs(i);
            ++sol;
        }
    }

    cout << sol << endl;
}
const int MAX_N = 200000;

void init2(int num)
{
    brr[num] = mod_pow(arr[num], MOD - 2, MOD);
    for (int i = num - 1; i >= 0; --i)
    {
        brr[i] = (brr[i + 1] * (i + 1)) % MOD;
    }
}

long long cal(int n, int k)
{
    return (k > n) ? 0 : (arr[n] * brr[k] % MOD * brr[n - k] % MOD);
}

void MUKU()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> st;
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        int q = arr[i];

        flag = (i == 0) ? (st.insert(q), true)
                        : (st.count(q - 1) == 0 && st.count(q + 1) == 0 ? false
                                                                        : (st.insert(q), true));

        if (!flag)
            break;
    }

    (flag) ? yes : no;
}

int main()
{
    fastio();
  

    int t;
    cin >> t;
    while (t--)
        MUKU();

    return 0;
}
