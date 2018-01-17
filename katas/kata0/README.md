# Kata 0: Two Sum

Given an array of integers, return indexes of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Example:

```
Given nums = [2, 7, 11, 15], target = 9,    Because nums[0] + nums[1] = 2 + 7 = 9,  return [0, 1].  
```

## Solution:

Right of the bat we can see some context about the problem:

* It works with only positive integers
* The result should be positive
* It should always return a pair of numbers
* There's only one solution
* The array of numbers can be infinite

## First Case

The simplest case is when the array of numbers given is 2. In this case we simply return that same array since all the case should have a satisfying solution.

## Second Case

The next case is when number of elements inside the array is bigger than 2

In this case the simplest solution would be to go through the array checking if each number is greater than the number that is wanted. If it is it would move to the next index and check that same thing. If the number checked is smaller, then the complement of those two numbers would be calculated and from that point on that number should be found in the rest of the array. To make this easier, the rest of the array that hasn't been analyzed can be sorted and after this getting the desire number is quite straight forward.

This solution has a O(n^2) complexity due to the algorithms for sorting. Which for a relatively small array would be a fair solution. However, as it was pointed out in the context, the array could be infinite. So for this case it wouldn't be the most optimal solution.

## The best solution... maybe

A good solution is to follow the same logic of the last solution all the way to the sorting part. When the complement is calculated, a hash table can be created with the rest of the numbers that weren't analyzed with the key being the number and the value their index. In theory a hash table has a complexity of O(1 + α), but for simplicity sake lets say it has a constant complexity in the worst case scenario.

So after all that we have a easy way to analyze the complexity of the solution.

* (n) to go through all the elements in the array given that the number of elements in it is n
* (n) for the linear search of the created hash table

## Giving a complexity of O(2n) or just O(n)
