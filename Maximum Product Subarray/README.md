
We traverse and multiply elements and if our value is greater than the previously stored value then store this value in place of the previously stored value. Whenever encountering a zero, the product of elements till that point is reset to 1, as a zero signifies the start of a new subarray.

However, a potential issue arises when dealing with arrays containing an odd number of negative elements. In such cases, to ensure an even number of negative elements and thus a positive product, we need to discard one negative element. The decision of which negative element to discard - the first or the last - impacts the outcome.

To address this, the approach involves traversing the array from both ends simultaneously. By doing so, we can evaluate which negative element's exclusion maximizes the product of the subarray. This ensures that the resulting subarray product is maximized.

In essence, we select the traversal direction that yields the maximum product subarray by considering the exclusion of the negative element that contributes the most to the overall product.

Time Complexity: O(N)
Auxiliary Space: O(1)
