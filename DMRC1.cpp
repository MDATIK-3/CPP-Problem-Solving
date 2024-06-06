#include <iostream>
#include <cmath>

using namespace std;

long long int minSecondsToBeat(int x, long long int y) {
    int seconds = 0;
    double harePosition = 0;
    double tortoisePosition = 0;
    double powFactor = 1.0;

    while (tortoisePosition <= harePosition) {
        harePosition += powFactor * x;
        powFactor *= 0.5;  
        tortoisePosition += y;
        seconds++;
    }

    return seconds;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int x;
        long long int y;
        cin >> x >> y;

        long long int minSeconds = minSecondsToBeat(x, y);

        cout << "Case #" << t << ": " << minSeconds << endl;
    }

    return 0;
}
