#include<iostream>
using namespace std;
int main()
{
    int y, arr[4], i=3, j=3;
    cin>>y;

    while(1)
    {
        y++;
        arr[3]= y%10;
        arr[2] = (y/10)%10;;
        arr[1] = (y/100)%10;
        arr[0] = y/1000%10;

        if(arr[0]!=arr[1] && arr[0] != arr[2] && arr[0] != arr[3] && arr[1]!= arr[2] && arr[1] != arr[3] && arr[2] != arr[3])
        {
            break;
        }

    }
    cout <<y <<endl;

}
