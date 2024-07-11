#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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

        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans = max(ans, arr[i] + i);
        }

        cout << ans << endl;
    }
    return 0;
}
