#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

void MUKU()
{
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    ll ans = 0;
    vector<ll> pr(n + 1, 0);
    for (int i = 0; i < n; i++)
        pr[i + 1] = pr[i] + arr[i];

    for (int i = 0; i <= k; i++)
        ans = max(ans, pr[n - (k - i)] - pr[2 * i]);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }

    return 0;
}
