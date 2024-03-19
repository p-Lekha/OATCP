A 2D vector dp is created with dimensions n x m, where n is the number of boys and m is the number of girls.
dp[i][j] represents the maximum number of pairs that can be formed using the first i boys and the first j girls.
Dynamic Programming Iteration:

The nested loops iterates over all pairs of boys and girls.
For each pair (i, j), if the skill difference between the i-th boy and the j-th girl is at most one, dp[i][j] is incremented to represent a potential pair.

The value of dp[i][j] is updated to the maximum among the possibilities.

The maximum number of pairs that can be formed using all the boys and girls is stored in dp[n-1][m-1].
