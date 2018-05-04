# Stable Marriage Problem

There are given n men and n women. Each woman ranks all men in order of her preference (her first choice, her second choice, and so on). Similarly, each man sorts all women according to his preference. The goal is to arrange n marriages in such a way that if a man m prefers some woman w more than his wife, and w prefers m more then her husband a new marriage occurs between w and m. If w prefers her husband more, then she stays married to him. This problem always has a solution and your task is to find one.

## Input

The first line contains a positive integer t<=100 indicating the number of test cases. Each test case is an instance of the stable marriage problem defined above. The first line of each test case is a positive integer n<=500 (the number of marriages to find). The next n lines are the woman's preferences: ith line contains the number i (which means that this is the list given by the ith woman) and the numbers of men (the first choice of ith woman, the second choice,...). Then, the men's preferences follow in the same format.

## Output

For each test case print n lines, where each line contains two numbers m and w, which means that the man number m and the woman number w should get married.

## Example

Input:
```
Input:
2
4
1 4 3 1 2
2 2 1 3 4
3 1 3 4 2
4 4 3 1 2
1 3 2 4 1
2 2 3 1 4
3 3 1 2 4
4 3 2 4 1
7
1 3 4 2 1 6 7 5
2 6 4 2 3 5 1 7
3 6 3 5 7 2 4 1
4 1 6 3 2 4 7 5
5 1 6 5 3 4 7 2
6 1 7 3 4 5 6 2
7 5 6 2 4 3 7 1
1 4 5 3 7 2 6 1
2 5 6 4 7 3 2 1
3 1 6 5 4 3 7 2
4 3 5 6 7 2 4 1
5 1 7 6 4 3 5 2
6 6 3 7 5 2 4 1
7 1 7 4 2 6 5 3
```

Output:
```
1 3
2 2
3 1
4 4
1 4
2 5
3 1
4 3
5 7
6 6
7 2
```
# Solution

Theres is 2 steps to solving this problem.

1. At the beginning, set everyone as not engaged and have all men propose to the woman the like the most, if the woman to whom the man proposes to has him as his top choice set them both as engage

2. After the first round goes through the men that aren't engage to someone propose to their next option. If the woman being proposed to isn't engaged to someone or the person that ask her is in a higher position than the one shes with she accepts. This is repeated until everyone is engaged.

## Complexity

The complexity of this approach is of O(n^2) due to that in the worst case scenarios we will iterate through all the choices of all the women and all the men.