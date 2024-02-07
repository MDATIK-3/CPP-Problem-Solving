#include <iostream>
#include <string>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    int rem = n % 7;
    int mul = n/7;
    string str = "ROYGBIV";
    for(int i=2; i<=mul; i++){
        str+="ROYGBIV";
    }
    if (rem == 1)
        str += "G";
    if (rem == 2)
        str += "GB";
    if (rem == 3)
        str += "YGB";
    if (rem == 4)
        str += "YGBI";
    if (rem == 5)
        str += "OYGBI";
    if (rem == 6)
        str += "OYGBIV";
    cout << str << endl;
}

int main()
{
    MUKU();
    return 0;
}
