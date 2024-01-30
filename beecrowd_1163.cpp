#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double h;
    int p1, p2;
    int n;
    cin >> h ;
    cin >> p1 >> p2;
    cin >> n;

    while (n > 0)
    {
        double a, v;
        cin >> a >> v;
        a = (a*3.14159)/180;
        double x = h / (tan(a));
        double Range = ((v * v) * (sin(a)) * cos(a))*2;
        Range /= 9.80665;
        // cout<<x<<endl;
        // cout<<Range<<endl;
        double result = Range + x;

        if(result< p1 || result >p2)
            cout << fixed << setprecision(5) << result << " -> NUCK" << endl;
        else
            cout << fixed << setprecision(5) << result << " -> DUCK" << endl;
        n--;
    }

    return 0;
}
