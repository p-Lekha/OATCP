Traverse the string and check for local maximas. Whenever a dip appears, remove all the digits from the stack which are greater than the current digit, meanwhile reducing k after every pop operation.

At the end of the traversal, check if the stack is empty and k is not zero.

Finally, store the remaining digits in a string and return it as the result.

Time complexity: O(n)
Space complexity: O(n)
