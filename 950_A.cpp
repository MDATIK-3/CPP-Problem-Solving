#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

///////////////////////////////////////////////////////
//                                                   //
//  Nickname: Atik                                   //
//  University: Green University of Bangladesh       //
//  Country: Bangladesh                              //
//  City: Narayanganj                                //
//  CodeForces: codeforces.com/profile/md.atik       //
//                                                   //
//  Language: C++                                    //
//  Compiler: gnu g++                                //
//  Editor: VS Code                                  //
//                                                   //
///////////////////////////////////////////////////////

void muku()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<int> tgt_arr(n);
    set<int> tgt_set;
    for (int &x : tgt_arr)
    {
        cin >> x;
        tgt_set.insert(x);
    }

    multiset<int> rem_changes;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != tgt_arr[i])
        {
            rem_changes.insert(tgt_arr[i]);
        }
    }

    int m;
    cin >> m;
    bool possible = false;
    for (int i = 0; i < m; ++i)
    {
        int chng;
        cin >> chng;
        if (rem_changes.find(chng) != rem_changes.end())
        {
            rem_changes.erase(rem_changes.find(chng));
            if (i == m - 1)
            {
                possible = true;
            }
        }
        else if (tgt_set.count(chng))
        {
            if (i == m - 1)
            {
                possible = true;
            }
        }
    }

    (possible && rem_changes.empty()) ? yes : no;
}

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
        muku();

    return 0;
}
