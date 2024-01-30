#include<iostream>
using namespace std;
int main()
{
    int x;
    long int y, p=1;
    cin >>x;
    cin >>y;

    while(p <= y)
    {
        for(int i=1; i<=x && p < y; i++)
        {
            cout<< p++ << " ";
        }
        if(p < y)
            cout<<endl;
        else
        {
            cout<< p++ << endl;
        }

    }
    return 0;
}
