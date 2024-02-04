#include <iostream>
#include <set>
using namespace std;

void MUKU()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++){
     cin>>arr[i];
        sum += arr[i];
    }
    cout << sum << endl;
}

int main()
{

    MUKU();

    return 0;
}
