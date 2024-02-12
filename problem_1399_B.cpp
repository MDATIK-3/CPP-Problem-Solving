#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

void MUKU()
{
    int n;
    cin >> n;

    vector<ll> vec1;
    vector<ll> vec2;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vec1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vec2.push_back(x);
    }

    ll minA = *min_element(vec1.begin(), vec1.end());
    ll minB = *min_element(vec2.begin(), vec2.end());

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += max((vec1[i] - minA), (vec2[i] - minB));
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }
    return 0;
}
