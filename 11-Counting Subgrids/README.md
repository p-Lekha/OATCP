We create a 1D vector rows of size n, where each element rows[i] represents the binary representation of the i-th row of the grid. We do this by bitwise OR-ing the elements of each row in the grid.

We calculate the number of set bits (1s) in the bitwise AND operation between the binary representations of the i-th and j-th rows. This count represents the number of columns where both rows have black (1) corners, indicating the presence of a subgrid with black corners.
set_bits= __builtin_popcount(rows[i]& rows[j])

Then we calculate the number of combinations of choosing 2 out of set_bits set bits, which represents the number of subgrids with black corners formed by the current pair of rows.
(set_bits*(set_bits-1))/2

Time complexity: O(n^2)
Space complexity: O(n)
