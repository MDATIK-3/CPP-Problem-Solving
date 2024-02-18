#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void MUKU() {
    int t;
    cin >> t;
    vector<string> arr(t);
    for (int i = 0; i < t; i++)
        cin >> arr[i];
    int count = 1;
    for (int i = 1; i < t; i++) {
        if (arr[i - 1] != arr[i])
            count++;
    }
    cout << count << endl;
}

int main() {
    MUKU();
    return 0;
}
