#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int j=0;
    while(j<1000)
    {
        for(int i = 0; i<t; i++)
        {
            if(j<1000)
            {
                cout<<"N["<<j<<"]"<< "="<<i<<endl;
                j++;

            }
            else
                break;
        }
    }
    return 0;
}
