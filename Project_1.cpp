#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <string>
#include <cstring>

using namespace std;

const int BOARD_SIZE = 8;
const int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
const int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};

struct Square {
    int x, y;
    Square(int _x, int _y) : x(_x), y(_y) {}
};

bool isValid(int x, int y) {
    return x >= 0 && x < BOARD_SIZE && y >= 0 && y < BOARD_SIZE;
}

int bfs(Square start, Square end) {
    if (start.x == end.x && start.y == end.y) return 0;

    queue<Square> q;
    bool visited[BOARD_SIZE][BOARD_SIZE];
    memset(visited, false, sizeof(visited));

    q.push(start);
    visited[start.x][start.y] = true;
    int moves = 0;

    while (!q.empty()) {
        int size = q.size();
        moves++;
        for (int i = 0; i < size; ++i) {
            Square current = q.front();
            q.pop();

            for (int j = 0; j < 8; ++j) {
                int newX = current.x + dx[j];
                int newY = current.y + dy[j];
                
                if (isValid(newX, newY) && !visited[newX][newY]) {
                    if (newX == end.x && newY == end.y) {
                        return moves;
                    }
                    q.push(Square(newX, newY));
                    visited[newX][newY] = true;
                }
            }
        }
    }
    return -1; 
}

int main() {
    string input;
    while (getline(cin, input)) {
        if (input.empty()) break;

        string start = input.substr(0, 2);
        string end = input.substr(3, 2);

        Square startSquare(start[0] - 'a', start[1] - '1');
        Square endSquare(end[0] - 'a', end[1] - '1');

        int moves = bfs(startSquare, endSquare);

        cout << "To get from " << start << " to " << end << " takes " << moves << " knight moves." << endl;
    }

    return 0;
}


