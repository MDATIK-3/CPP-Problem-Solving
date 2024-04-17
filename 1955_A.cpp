#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> input(n * n);

        for (int i = 0; i < n * n; i++)
            cin >> input[i];

        int a = *min_element(input.begin(), input.end()); // Find the minimum element

        unordered_map<int, int> mp;
        for (auto x : input)
            mp[x]++;

        vector<vector<int>> mat(n, vector<int>(n, 0));
        mat[0][0] = a;
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
            {
                mat[i][0] = mat[i - 1][0] + c;
            }
            for (int j = 0; j < n; j++)
            {
                if (j != 0)
                    mat[i][j] = mat[i][j - 1] + d;
            }
        }
        bool flag = true; // Declare flag variable
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int temp = mat[i][j];
                if (mp.find(temp) == mp.end())
                {
                    flag = false; // Set flag to false if condition not met
                }
                else
                {
                    mp[temp]--;
                    if (mp[temp] == 0)
                        mp.erase(temp);
                }
            }
        }
        if (!flag) // Check flag to determine output
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
