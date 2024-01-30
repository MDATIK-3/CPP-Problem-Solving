#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin >>n;
    while(n>0)
    {

        int num, avr=0, above=0;
        double result=0;
        cin >>num;
        int arr[num];
        for(int i=0; i<num; i++)
        {
            cin>>arr[i];
            avr+=arr[i];
        }
        avr /= num;
        for(int i=0; i<num; i++)
        {
            if(arr[i]>avr)
                above++;
        }
        result = ((double)above/num)*100;
        cout<<fixed<<setprecision(3)<<result<<"%"<<endl;


        n--;
    }
}
