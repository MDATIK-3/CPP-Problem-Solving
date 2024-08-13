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
int cal(const vector<int> &arr, int s)
{
    int w = 0;
    int l = 0;

    for (int x : arr)
    {
        if (x != 0)
        {
            l += x;
        }
        else
        {
            int r = s - l;
            if (l == r)
            {
                w += 2;
            }
            if (abs(l - r) == 1)
            {
                w += 1;
            }
        }
    }

    return w;
}
void inputV(vector<pair<int, int>> &vec)
{
    for (int i = 0; i < 16; i++)
    {
        cin >> vec[i].first;
        vec[i].second = i;
    }
}

void st(vector<pair<int, int>> &vec)
{
    sort(vec.begin(), vec.end());
}

void aV(const vector<pair<int, int>> &vec, vector<int> &brr)
{
    for (int i = 0; i < 16; i++)
    {
        brr[vec[i].second] = (i == 0) ? 0 : (i <= 2) ? 1
                                        : (i <= 6)   ? 2
                                        : (i <= 14)  ? 3
                                                     : 4;
    }
}

void MUKU()
{
    vector<pair<int, int>> arr(16);
    vector<int> brr(16);
    inputV(arr);
    st(arr);
    aV(arr, brr);
    for (int i = 0; i < 16; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        MUKU();

    return 0;
}
