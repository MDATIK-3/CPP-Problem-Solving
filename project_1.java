import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;

class Square {
    int x, y;

    public Square(int _x, int _y) {
        x = _x;
        y = _y;
    }
}

public class project_1 {
    static final int BOARD_SIZE = 8;
    static final int[] dx = { 2, 2, 1, 1, -1, -1, -2, -2 };
    static final int[] dy = { 1, -1, 2, -2, 2, -2, 1, -1 };

    static boolean isValid(int x, int y) {
        return x >= 0 && x < BOARD_SIZE && y >= 0 && y < BOARD_SIZE;
    }

    static int bfs(Square start, Square end) {
        if (start.x == end.x && start.y == end.y)
            return 0;

        Queue<Square> q = new ArrayDeque<>();
        boolean[][] visited = new boolean[BOARD_SIZE][BOARD_SIZE];

        q.offer(start);
        visited[start.x][start.y] = true;
        int moves = 0;

        while (!q.isEmpty()) {
            int size = q.size();
            moves++;
            for (int i = 0; i < size; ++i) {
                Square current = q.poll();

                for (int j = 0; j < 8; ++j) {
                    int newX = current.x + dx[j];
                    int newY = current.y + dy[j];

                    if (isValid(newX, newY) && !visited[newX][newY]) {
                        if (newX == end.x && newY == end.y) {
                            return moves;
                        }
                        q.offer(new Square(newX, newY));
                        visited[newX][newY] = true;
                    }
                }
            }
        }
        return -1; 
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input;
        while ((input = br.readLine()) != null) {
            if (input.isEmpty())
                break;

            String start = input.substring(0, 2);
            String end = input.substring(3, 5);

            Square startSquare = new Square(start.charAt(0) - 'a', start.charAt(1) - '1');
            Square endSquare = new Square(end.charAt(0) - 'a', end.charAt(1) - '1');

            int moves = bfs(startSquare, endSquare);

            System.out.println("To get from " + start + " to " + end + " takes " + moves + " knight moves.");
        }
    }
}
