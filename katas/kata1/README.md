# Kata 1
Given two lists A and B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.

We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.

These lists A and B may contain duplicates. If there are multiple answers, output any of them.

## For example, given

'''
A = [12, 28, 46, 32, 50]  B = [50, 12, 32, 46, 28]  
'''
We should return
'''
[1, 4, 3, 2, 0]  
'''
as  P[0] = 1 because the  0th element of  A appears at  B[1], and  P[1] = 4 because the  1st element of  A appears at  B[4], and so on.
### Note:

A, B have equal lengths in range [1, 100].
A[i], B[i] are integers in range [0, 10^5].

# Solution

Thinking back to the first Kata, right out of the way I thought that maybe the best method to solve this problem would be through the implementation of a hash table.

First thing for this solution would be to build a hash table of array B having the keys being the values and the value being the index of the respective value. The creation of this hash table takes O(n) time.

After that, go through array A and getting the index of array B respective to A[i] with the hashtable and appending this value to the resulting array that will be returned. This also takes O(n).

At the end the complexity of this solution is O(n).
