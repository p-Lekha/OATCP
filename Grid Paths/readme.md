For the most efficient solution to this problem, dynamic programming offers a robust approach. Leveraging the principles of dynamic programming, we avoid recomputing subproblems. By employing a temporary 2D matrix and utilizing a top-down approach, we store values efficiently.
The DP table dp is a 2D vector initialized with -1 values.
Before computing the number of paths from (i, j) to (r-1, c-1), the code checks if the result for this subproblem has already been computed and stored in dp[i][j].
If the value is not -1, it means the result is already calculated, so it directly returns dp[i][j].
If the value is -1, it proceeds to compute the result recursively and stores it in dp[i][j] for future use.
Time Complexity: O(nn) Auxiliary Space: O(nn)
