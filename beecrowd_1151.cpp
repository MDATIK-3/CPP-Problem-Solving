#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long int arr[46], sum=0;
    arr[0] = 0;
    arr[1] = 1;

    if(n==0)
        return 0;

    if(n==1)
    {
        cout << arr[0] << endl;
    }
    else if(n==2)
    {
        cout<< arr[0]<< " ";
        cout << arr[1] << endl;
    }
    else
    {
        cout<< arr[0]<< " ";
        cout << arr[1] << " ";
        for(int i=2; i<n-1; i++)
        {
            arr[i] = arr[i-2] + arr[i-1];
            cout << arr[i] << " ";
        }
        cout<< arr[n-2] + arr[n-3] << endl;

    }
    return 0;
}
