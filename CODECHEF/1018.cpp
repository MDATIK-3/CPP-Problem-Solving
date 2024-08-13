#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

#include <vector>
#include <cmath>

using namespace std;

class Solution
{
public:
    int findClosestNumber(vector<int> &arr)
    {
        int temp = arr[0];
        for (int x : arr)
        {
            if (abs(x) < abs(temp) || (abs(x) == abs(temp) && x > temp))
            {
                temp = x;
            }
        }
        return temp;
    }
};
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        sort(arr.begin(), arr.end(), [x](int a, int b)
             {
            if (abs(a - x) == abs(b - x))
                return a < b;
            return abs(a - x) < abs(b - x); });

        vector<int> brr(arr.begin(), arr.begin() + k);

        sort(brr.begin(), brr.end());

        return brr;
    }
};
class Solution
{
public:
    int guessNumber(int n)
    {
        int l = 1, r = n;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            int res = guess(m);
            if (res == 0)
            {
                return m;
            }
            else if (res < 0)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return -1;
    }
};

void MUKU()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    for (auto &entry : mp)
    {
        if (entry.second > 2)
        {
            no;
            return;
        }
    }
    yes;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        MUKU();

    return 0;
}
