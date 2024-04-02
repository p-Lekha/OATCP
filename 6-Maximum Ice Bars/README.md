We approach the problem utilizing a greedy strategy.

To maximize the number of bars we can buy, we sort the costs from lowest to highest. This facilitates purchasing the cheapest bars first, allowing us to buy the maximum possible number.
We iteratively purchase bars starting from the cheapest until either we run out of coins or we buy all the bars.
At each step, we keep track of the cumulative cost of the bars we've bought. If this sum exceeds the available coins, we stop the process as we can't buy any more bars with the remaining budget.
