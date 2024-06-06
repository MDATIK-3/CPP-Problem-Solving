#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxPrivacyValue(vector<int>& rooms, int N, int K) {
    sort(rooms.begin(), rooms.end());

    int maxPrivacy = 0;
    for (int i = 0; i <= N - K; ++i) {
        maxPrivacy = max(maxPrivacy, rooms[i + K - 1] - rooms[i]);
    }
    return maxPrivacy;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> rooms(N);
    for (int i = 0; i < N; ++i) {
        cin >> rooms[i];
    }

    int maxPrivacy = maxPrivacyValue(rooms, N, K);
    cout << maxPrivacy << endl;

    return 0;
}
