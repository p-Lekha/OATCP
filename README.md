# OATCP

# Dice Combination
Optimal Substructure Explanation:

Dynamic Programming Approach: The recursive approach needs to be optimized by dealing with the following overlapping subproblems.
Every state in the problem exhibits recurrence for six states. The recursive definition of dp(N) can be expressed as follows:

dp[N] = dp[N-1] + dp[N-2] + dp[N-3] + dp[N-4] + dp[N-5] + dp[N-6]

Follow the steps outlined below to effectively solve the problem:

Initialization:
Initialize an auxiliary array dp[] of size N + 1 with an initial value of -1. This array is designed to store the count of ways of achieving a sum of i.

Base Case:
When solving the problem, the base case occurs when N equals 0 in any state. In such cases, the result for that state is 1.

Memoization:
If dp[i] for any state is not equal to -1, it indicates that this value has already been calculated. Therefore, utilize this precomputed value, as the substructure has already been processed.

Time Complexity: O(N)
Auxiliary Space: O(N)


# Grid Paths


For the most efficient solution to this problem, dynamic programming offers a robust approach. Leveraging the principles of dynamic programming, we avoid recomputing subproblems. By employing a temporary 2D matrix and utilizing a top-down approach, we store values efficiently.

Time Complexity: O(n*n) 
Auxiliary Space: O(n*n)
