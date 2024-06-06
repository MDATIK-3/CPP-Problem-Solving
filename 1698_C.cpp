#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    long long maximumHappinessSum(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());
        int count = 0;
        int n = arr.size();
        int j = 0;
        for (int i = n - 1; i > n - k - 1; i--)
        {
            if (arr[i] - j >= 0)
            {
                count += arr[i] - j;
                j++;
            }

        }
        return count;
    }
};

bool searchTriplets(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 2; ++i)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0)
            {
                return true;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cout << (searchTriplets(arr) ? "YES" : "NO") << endl;
    }
    return 0;
}