#include <iostream>
#include <climits> // for INT_MAX
#include <algorithm>

using namespace std;
//problem solve hoyni
void MUKU()
{
    int n, len;
    cin >> n >> len;
    int arr[n];
    string str;
    int i, j, count = 0, sum = 0;

    // taking input a string and summing their ASCII values
    for (i = 0; i < n; i++)
    {
        cin >> str;
        for (j = 0; j < len; j++)
        {
            sum += str[j];
        }
        arr[i] = sum;
        printf("arr[%d]= %d\n", i, sum);
        sum = 0;
    }

    sort(arr, arr + n);
    int mindiff = INT_MAX;

    for (i = 1; i < n; i++)
    {
        int diff = arr[i] - arr[i - 1];
        mindiff = min(diff, mindiff);
    }
    cout << mindiff << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }
    return 0;
}
