#include <iostream>
#include <vector>

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

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    long long maxPoints = 0;

    while (!v.empty()) {
        int shootIndex = -1;
        long long shootPoints = 0;

        for (int i = 0; i < v.size(); ++i) {
            long long points = 0;

            if (i > 0 && i < v.size() - 1) {
                points = v[i - 1] * v[i + 1];
            } else if (i == 0 && v.size() > 1) {
                points = v[i + 1];
            } else if (i == v.size() - 1 && v.size() > 1) {
                points = v[i - 1];
            } else {
                points = v[i];
            }

            if (points > shootPoints) {
                shootIndex = i;
                shootPoints = points;
            }
        }

        maxPoints += shootPoints;
        v.erase(v.begin() + shootIndex);
    }

    cout << maxPoints << endl;

    return 0;
}