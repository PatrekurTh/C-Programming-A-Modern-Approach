```
Write the following function, which evaluates a chess position:
int evaluate_position(char board[8][8]);
board represents a configuration of pieces on a chessboard, where the letters K, Q, R, B, N,
P represent White pieces, and the letters k, q, r, b, n, and p represent Black pieces.
evaluate_position should sum the values of the White pieces (Q = 9, R = 5, B = 3,
N = 3, P = 1). It should also sum the values of the Black pieces (done in a similar way). The
function will return the difference between the two numbers. This value will be positive if
White has an advantage in material and negative if Black has an advantage.
```

**Solution**  
``` C
int evaluate_position(char board[8][8])
{
    int white = 0, black = 0, i, j, val;
    char c;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            c = board[i][j];
            switch (toupper(c)) {
                case 'Q':
                    val = 9; break;
                case 'R':
                    val = 5; break;
                case 'B': case 'N':
                    val = 3; break;
                case 'P':
                    val = 1; break;
                default:
                    continue;
            }
            if (islower(c))
                black += val;
            else
                white += val;
        }
    }

    return white - black;
}


```