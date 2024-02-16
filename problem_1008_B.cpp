#include<bits/stdc++.h>
 
#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
 
using namespace std;
 
void MUKU()
{
    int n;
    cin >> n;
    ll arr[n], brr[n], crr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> brr[i];
    }
    crr[0] = max(arr[0], brr[0]);
    bool f = true;
    for (int i = 1; i < n; i++)
    {
        ll x = arr[i];
        ll y = brr[i];
        if(x<=crr[i-1] && y<=crr[i-1]) 
            crr[i] = max(x,y);
        else if (x <= crr[i - 1])
            crr[i] = x;
        else if (y <= crr[i - 1])
            crr[i] = y;
        else {
            no; f = false;
            break;
        }
    }
    if(f) yes;
}
 
int main()
{
 
    MUKU();
 
    return 0;
}