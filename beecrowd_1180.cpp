#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int min=arr[0], pos;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min= arr[i];
            pos = i;
        }
    }
    cout<< "Menor valor: "<< min <<endl;
    cout << "Posicao: "<< pos;
    return 0;
}
