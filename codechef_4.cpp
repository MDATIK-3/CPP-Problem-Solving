#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;
/*
int Vowel(string str)
{
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
}
*/

void MUKU()
{
    int n = 3;
    vector<int> arr(n);
    vector<int> brr(n);
    int mark1 = 0, mark2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mark1 += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
        mark2 += brr[i];
    }
    if (mark1 > mark2)
    {
        cout << "DRAGON" << endl;
    }
    else if (mark1 < mark2)
    {
        cout << "SLOTH" << endl;
    }
    else if (arr[0] > brr[0])
        cout << "DRAGON" << endl;
    else if (arr[0] < brr[0])
        cout << "SLOTH" << endl;
        else if (arr[1] > brr[1])
        cout << "DRAGON" << endl;
    else if (arr[1] < brr[1])
        cout << "SLOTH" << endl;
        else if (arr[2] > brr[2])
        cout << "DRAGON" << endl;
    else if (arr[2] < brr[2])
        cout << "SLOTH" << endl;
        else
        cout<<"TIE"<<endl;
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
