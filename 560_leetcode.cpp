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
            result = min(result, (arr[i + 1] - arr[i]));
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
class Solution
{
public:
    int minimizeMax(vector<int> &arr, int p)
    {

        int n = arr.size();
        if (n == 1)
            return 0;
        sort(arr.begin(), arr.end());
        int low = 0;
        int ans = INT_MAX;
        int high = arr[n - 1] - arr[0];
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int count = 0;
            int i = 1;
            while (i < n)
            {
                if (arr[i] - arr[i - 1] <= mid)
                {
                    count++;
                    i += 2;
                }
                else
                    i++;
            }
            if (count >= p)
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};
class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &arr)
    {
        int n = arr.size();
        if (n == 1)
            return {0};
        vector<int> result(n, 0);
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] + arr[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = right[i + 1] + arr[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            result[i] = abs(left[i] - right[i]);
        }
        return result;
    }
};
class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &arr)
    {
        int n = arr.size();
        unordered_set<int> st;
        vector<int> prefix(n);
        vector<int> suffix(n);
        for (int i = 0; i < n; i++)
        {
            st.insert(arr[i]);
            prefix[i] = st.size();
        }
        st.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            suffix[i] = st.size();
            st.insert(arr[i]);
        }
        vector<int> result(n);
        for (int i = 0; i < n; i++)
        {
            result[i] = prefix[i] - suffix[i];
        }
        return result;
    }
};
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> result;
        for (int it : nums)
        {
            int n = result.size() - 1;
            if (result.empty() || result[n] < it)
            {
                result.push_back(it);
            }
            else
            {
                auto x = lower_bound(result.begin(), result.end(), it);
                *x = it;
            }
        }
        return result.size();
    }
};
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        vector<int> result;
        for (int it : nums)
        {
            int n = result.size();
            if (result.empty() || result[n - 1] < it)
            {
                result.push_back(it);
            }
            else
            {
                auto pos = lower_bound(result.begin(), result.end(), it);
                *pos = it;
            }
        }
        return result.size() == 3;
    }
};
class Solution
{
public:
    int heightChecker(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> brr(n);
        copy(arr.begin(), arr.end(), brr.begin());
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
                count++;
        }
        return count;
    }
};
class Solution
{
public:
    string firstPalindrome(vector<string> &arr)
    {
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            int t = arr[i].length();
            for (int j = 0; j < t / 2; j++)
            {
                if (arr[i][j] != arr[i][t - j - 1])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                return arr[i];
        }
        return "";
    }
};
class Solution
{
public:
    bool isPalindrome(string data)
    {
        int n = data.size();
        string str = "";
        transform(data.begin(), data.end(), data.begin(),
                  [](unsigned char c)
                  { return tolower(c); });
        for (char c : data)
        {
            if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            {
                str += c;
            }
        }
        int t = str.length();
        for (int j = 0; j < t / 2; j++)
        {
            if (str[j] != str[t - j - 1])
            {
                return false;
            }
        }
        return true;
    }
};
class Solution
{
public:
    bool MUKU(string str, int left, int right)
    {
        while (left < right)
        {
            if (str[left] != str[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string str)
    {
        int t = str.length();
        int left = 0;
        int right = t - 1;
        while (left < right)
        {
            if (str[left] != str[right])
            {
                return MUKU(str, left + 1, right) || MUKU(str, left, right + 1);
            }
            left++;
            right--;
        }
        return true;
    }
};
class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr, vector<int> &brr)
    {
        int n = arr.size();
        int m = brr.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        vector<int> result;
        for (int i = 0; i < m; i++)
        {
            while (mp[brr[i]]--)
            {
                result.push_back(brr[i]);
            }
            mp.erase(brr[i]);
        }

        for (int i = 0; i <= 1000; i++)
        {
            while (mp[i]--)
            {
                result.push_back(i);
            }
        }

        return result;
    }
};
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0, mid = 0, k = nums.size() - 1;
        while (mid <= k)
        {
            if (nums[mid] == 0)
            {
                swap(nums[i], nums[mid]);
                i++, mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[k]);
                k--;
            }
        }
    }
};
class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long int l = 0;
        long long int r = sqrt(c);
        while (l <= r)
        {
            long long int sum = l * l + r * r;
            if (sum == c)
                return true;
            else
            {
                (sum > c) ? r-- : l++;
            }
        }
        return false;
    }
};
class Solution
{
public:
    int countGoodTriplets(vector<int> &arr, int a, int b, int c)
    {
        int n = arr.size();
        int count = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if ((abs(arr[i] - arr[j]) <= a) && (abs(arr[j] - arr[k]) <= b) && (abs(arr[i] - arr[k]) <= c))
                        count++;
                }
            }
        }

        return count;
    }
};
class Solution
{
public:
    int countTriples(int n)
    {
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j <= n; ++j)
            {
                int kSquare = i * i + j * j;
                int k = static_cast<int>(sqrt(kSquare));
                if (k * k == kSquare && k <= n)
                {
                    count++;
                }
            }
        }

        return count;
    }
};
class Solution
{
public:
    int missingNumber(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 0; i <= n; i++)
        {
            if (mp.find(i) == mp.end())
            {
                return i;
            }
        }
        return -1;
    }
};
class Solution
{
public:
    int missingNumber(vector<int> &arr)
    {
        int n = arr.size();
        int sum = (n * (n - 1)) / 2;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res += arr[i];
        }
        return sum - res;
    }
};

class Solution
{
public:
    int singleNumber(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 1)
            {
                return it->first;
            }
        }
        return -1;
    }
};
class Solution
{
public:
    int findDuplicate(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 2)
            {
                return it->first;
            }
        }
        return -1;
    }
};

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        vector<int> brr(2);
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 2)
            {
                brr.push_back(it->first);
            }
        }
        for (int i = 0; i <= n; i++)
        {
            if (mp.find(i) == mp.end())
            {
                brr.push_back(i);
            }
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
