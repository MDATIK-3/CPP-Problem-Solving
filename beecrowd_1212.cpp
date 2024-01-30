#include <iostream>
using namespace std;

int main(){
    long long int a,b;

    while(1)
    {
           int carry=0, count=0;
        cin>>a>>b;
        if(a == 0 && b == 0)
        {
            break;
        }
       
        while(1)
        {
            int x = a%10;
            int y = b%10;
            a /=10;
            b/=10;
            if(x+y+carry>=10)
            {
                count++;
                carry = 1;
            }
            else
            {
                carry=0;
            }
            if(a == 0 && b == 0)
            {
                break;
            }
        }

        if(count==0)cout<<"No carry operation."<<endl;
        if(count>1)cout<< count << " carry operations."<<endl;
        if(count==1)cout<<"1 carry operation."<<endl;


    }
}
