#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

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
}*/
ll DIV(ll a, ll b)
{
    return (a + b - 1) / b;
}
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n= arr.size();
        for(int i=0; i<n-1; i++){
            int sub =arr[0]- arr[1];
            if(arr[i]-arr[i+1]!=sub){
                return false;
            }
        }
        return true;
    }
};
void MUKU()
{
    int n;
    cin >> n;
    vector<ll> arr(n), brr;
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    brr.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; --i)
    {
        if (arr[i] > brr.back())
        {
            brr.push_back(arr[i] % 10);
            brr.push_back(arr[i] / 10);
        }
        else
            brr.push_back(arr[i]);
    }
    (is_sorted(brr.rbegin(), brr.rend())) ? yes : no;
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

