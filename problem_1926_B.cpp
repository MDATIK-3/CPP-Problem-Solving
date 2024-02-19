#include <iostream>
#include <vector>
#include <string>

using namespace std;

void countOnes()
{
    int n;
    cin >> n;
    cin.ignore(); // Ignore newline character after reading integer
    vector<int> counts;

    for (int i = 0; i < n; ++i)
    {
        string str;
        getline(cin, str);
        int count = 0;
        for (char ch : str)
        {
            if (ch == '1')
            {
                count++;
            }
        }
        counts.push_back(count);
    }
    bool flag = true;
    vector<int> vec;
    // Output the counts
    for (int count : counts)
    {
        if (count > 0)
            vec.push_back(count);
    }
    for (int i = 0; i < 1; i++)
    {
        if (vec[i] == vec[i + 1]){
            cout << "SQUARE" << endl;
        return;}
    }
    cout << "TRIANGLE" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        countOnes();
    }
    return 0;
}
