
Data
queue
visited[][]
dx[] and dy[] (knight move offsets)
moves



Function BFS(start, end):
    queue <- empty queue
    visited <- 2D array of false values
    Enqueue start into queue
    Mark start as visited
    moves <- 0

    WHILE queue is not empty DO
        Increment moves by 1
        size <- size of queue
        FOR i FROM 0 TO size-1 DO
            current <- Dequeue from queue
            FOR j FROM 0 TO 7 DO
                newX <- current.x + dx[j]
                newY <- current.y + dy[j]
                IF newX == end.x AND newY == end.y THEN
                    RETURN moves
                END IF
                IF newX is valid AND newY is valid AND NOT visited[newX][newY] THEN
                    Enqueue (newX, newY) into queue
                    Mark (newX, newY) as visited
                END IF
            END FOR
        END FOR
    END WHILE

    RETURN -1




Test Case 1: e2 to e4
Starting square: e2
Ending square: e4
Knight moves: e2 -> g3 -> e4 (2 moves)

Test Case 2: a1 to b2
Starting square: a1
Ending square: b2
Knight moves: a1 -> b3 -> c1 -> d3 -> b2 (4 moves)

Test Case 3: b2 to c3
Starting square: b2
Ending square: c3
Knight moves: b2 -> a4 -> c3 (2 moves)

Test Case 4: a1 to h8
Starting square: a1
Ending square: h8
Knight moves: a1 -> b3 -> c1 -> d3 -> e5 -> f7 -> h8 (6 moves)

Test Case 5: a1 to h7
Starting square: a1
Ending square: h7
Knight moves: a1 -> b3 -> c5 -> d7 -> f6 -> h7 (5 moves)

Test Case 6: h8 to a1
Starting square: h8
Ending square: a1
Knight moves: h8 -> g6 -> h4 -> g2 -> e1 -> c2 -> a1 (6 moves)
Test Case 7: b1 to c3

Starting square: b1
Ending square: c3
Knight moves: b1 -> c3 (1 move)
Test Case 8: f6 to f6

Starting square: f6
Ending square: f6
Knight moves: No move needed as the knight is already at the destination.



Data:
    dp[][] - 2D array

Function lcs(seq1, seq2):
    Initialize dp[][]
    For i from 0 to length(seq1):
        For j from 0 to length(seq2):
            dp[i][j] = (seq1[i - 1] == seq2[j - 1]) ? 
            dp[i - 1][j - 1] + 1 : 
            max(dp[i - 1][j], dp[i][j - 1])
    
    Return dp[length(seq1)][length(seq2)]

Main:
    While input is available:
        Read two sequences
        Print lcs(seq1, seq2)

Input
X = "bcacbcabbaccbab"
Y = "bccabccbbabacbc"

Input
X = "abracadabra"
Y = "avocado"



Initialize Data Structures:
queue <- empty queue
visited <- 2D array of false values
Enqueue start into queue
Mark start as visited
moves <- 0


Sequence 1: ABCBDAB
Sequence 2: BDCAB
LCS: BCAB (Length = 4)