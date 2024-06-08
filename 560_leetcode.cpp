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
class Solution
{
public:
    int minimumDifference(vector<int> &arr, int k)
    {
        if (k == 1)
            return 0;

        int n = arr.size();
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;

        for (int i = 0; i <= n - k; i++)
        {
            int diff = arr[i + k - 1] - arr[i];
            minDiff = min(minDiff, diff);
        }

        return minDiff;
    }
};
class Solution
{
public:
    int arrayPairSum(vector<int> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int sum = 0;
        for (int i = 0; i < n - 1; i += 2)
            sum += min(arr[i], arr[i + 1]);
        return sum;
    }
};
class Solution
{
public:
    bool canThreePartsEqualSum(vector<int> &arr)
    {
        int n = arr.size();

        int l = 0, r = n - 1, left_sum = arr[l++], right_sum = arr[r--], sum = 0, avg = 0;
        for (int it : arr)
            sum += it;
        avg = sum / 3;
        if (sum % 3)
            return false;
        while (l < r)
        {
            if (left_sum < avg)
                left_sum += arr[l++];
            if (right_sum < avg && l < r)
                right_sum += arr[r--];
            if (l <= r && left_sum == avg && right_sum == avg)
                return true;
        }
        return false;
    }
};
class Solution
{
public:
    int pivotIndex(vector<int> &arr)
    {
        int right = 0, left = 0;
        for (int it : arr)
            right += it;
        for (int i = 0; i < arr.size(); i++)
        {
            right -= arr[i];
            if (right == left)
                return i;
            left += arr[i];
        }
        return -1;
    }
};
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int sum = 0;
        int count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            count += mp[sum - k];
            mp[sum]++;
        }
        return count;
    }
};
class Solution
{
public:
    int minimumCost(vector<int> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int sum = 0;

        if (n <= 2)
        {
            return accumulate(arr.begin(), arr.end(), 0);
        }

        for (int i = n - 1; i >= 0; i -= 3)
        {
            sum += arr[i];
            if (i - 1 >= 0)
            {
                sum += arr[i - 1];
            }
        }

        return sum;
    }
};
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        int n = arr.size();
        int result = INT_MAX;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i++)
        {
            result = min(result,(arr[i + 1] - arr[i]));
        }
        vector<vector<int>> brr;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] == result)
                brr.push_back({arr[i - 1], arr[i]});
        }
        return brr;
    }
};
void MUKU()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    swap(arr[n - 1], arr[1]);
    for (int i = 1; i < n; i++)
    {
        sum1 += arr[i - 1] + arr[i];
    }

    cout << sum1 << endl;
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
