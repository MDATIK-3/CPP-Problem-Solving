#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

int Vowel(string str)
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

class Solution
{
public:
    int minChanges(int n, int k)
    {
        if ((n & k) != k)
            return -1;

        int res = 0;
        while (n > 0 && k != n)
        {
            if ((n & 1) == 1)
            {
                if ((k & 1) == 0)
                    res++;
            }
            k >>= 1;
            n >>= 1;
        }
        return res;
    }
};
void MUKU()
{
    int n, m, k;
    string str;
    cin >> n >> m >> k;
    if (n > 50)
        cout << 'A' << endl;
    else if (m > 50)
        cout << 'B' << endl;
    else if (k > 50)
        cout << 'C' << endl;
    else
        cout << "NOTA" << endl;
}
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    int winningPlayerCount(int n, vector<vector<int>> &arr)
    {
        auto brr = muku(n, arr);
        return MUKU3(n, brr);
    }

private:
    vector<unordered_map<int, int>> muku(int n, vector<vector<int>> &arr)
    {
        vector<unordered_map<int, int>> brr(n);
        for (auto &p : arr)
        {
            int temp = p[0];
            int c = p[1];
            brr[temp][c]++;
        }
        return brr;
    }

    int MUKU3(int n, vector<unordered_map<int, int>> &brr)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (MUKU4(i, brr[i]))
            {
                cnt++;
            }
        }
        return cnt;
    }

    bool MUKU4(int i, unordered_map<int, int> &crr)
    {
        for (auto &[brr, crr] : crr)
        {
            if (crr >= i + 1)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
        MUKU();

    return 0;
}

















#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        return min(muku5(grid, m, n), muku(grid, m, n));
    }
    
private:
    int muku5(vector<vector<int>>& grid, int m, int n) {
        int rowFlips = 0;
        for (int i = 0; i < m; i++) {
            rowFlips += muku4(grid[i], n);
        }
        return rowFlips;
    }
    
    int muku4(vector<int>& row, int n) {
        int rowMismatch = 0;
        for (int j = 0; j < n / 2; j++) {
            if (row[j] != row[n - 1 - j]) {
                rowMismatch++;
            }
        }
        return rowMismatch;
    }
    
    int muku(vector<vector<int>>& grid, int m, int n) {
        int colFlips = 0;
        for (int j = 0; j < n; j++) {
            colFlips += MUKU3(grid, m, j);
        }
        return colFlips;
    }
    
    int MUKU3(vector<vector<int>>& grid, int m, int j) {
        int colMismatch = 0;
        for (int i = 0; i < m / 2; i++) {
            if (grid[i][j] != grid[m - 1 - i][j]) {
                colMismatch++;
            }
        }
        return colMismatch;
    }
};
