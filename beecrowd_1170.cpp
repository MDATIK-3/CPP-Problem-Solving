#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double n;
    cin >> n;

    while (n > 0)
    {   n--;
        double a;
        int count = 0;
        cin >> a;
       
        while(a>1)
        {
            a/=2;
            count++;
        }
        cout<<count << " dias"<< endl;
     
    }

    return 0;
}
