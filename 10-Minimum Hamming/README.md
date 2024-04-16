We iterate over each bit position from 0 to 31 (assuming integers are represented using 32 bits in the system).

We shift the integer right by bit_pos positions and perform a bitwise AND operation with 1 to extract the rightmost bit.
bit = (nums[i] >> bit_pos) & 1 is the bit at the bit_pos position for the ith number in the nums array. 


For each bit position, we count the number of set bits (1s) among all elements in the array and calculate the number of unset bits (0s) which is equal to the total number of elements minus the number of set bits (1s) at that position.

The total Hamming distance at a particular bit position is calculated as the product of the count of set bits and the count of unset bits.


Time complexity: O(n)

Space complexity: O(1)

