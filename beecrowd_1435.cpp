#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU(int t)
{
    int arr[t][t];
  

    for (int i = 0; i <t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            arr[i][j] = min(min(i, j), min(t - 1 - i, t - 1 - j)) + 1;
         if(j<t-1)
           cout << arr[i][j] << "   ";
           else
             cout << arr[i][j];
        }
        cout<<endl;
    }
   cout<<endl;

}

int main()
{
    int t;

    while (cin >> t)
    {
        MUKU(t);
    }
    return 0;
}