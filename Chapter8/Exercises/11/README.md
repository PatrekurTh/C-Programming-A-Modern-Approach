```
Write a program fragment that declares an 8 × 8 char array named checker_board and
then uses a loop to store the following data into the array (one character per array element):
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
Hint: The element in row i, column j, should be the letter B if i + j is an even number.
```

**Solution**
``` C
#define N 8;

int i, j;
char checker_board[N][N];

for (i = 0; i < N; i++)
    for (j = 0; j < N, j++)
        checker_board[i][j] = (i + j) % 2 ? 'R' : 'B';
```
