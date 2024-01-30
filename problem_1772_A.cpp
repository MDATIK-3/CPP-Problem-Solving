#include<iostream>
using namespace std;
int main()
{
    int y;
    cin>>y;
    while(y>0)
    {
        string str;
        cin >>str;
        int sum = (int) (str[0] + str[2]) ;
        cout<<sum-96<<endl;
        y--;
    }
    return 0;
}
