#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    long int sum =0;
    if(a>b){
    int temp = a;
    a = b;
    b = temp;      
    }
    for(int i=a; i<=b; i++)
    {
        if(i%13 != 0)
            sum+=i;
    }
    cout<< sum<<endl;
}
