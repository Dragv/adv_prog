# Judge Route Circle
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

### Example 1:
```
Input: "UD"  Output: true  
```
### Example 2:
```
Input: "LL"  Output: false  
```

# Solution
The solution is quite simple for this problem. The initial coordinate of the cool awesome robot is (0, 0). The program will read character by character and will add or subtract 1 to each a parameter of the initial coordinate:

Given (x, y) where x = 0
```
if read character = 'R':
  (x, y) = (x + 1, y)
if read character = 'L':
  (x, y) = (x - 1, y)
if read character = 'U':
  (x, y) = (x, y + 1)
if read character = 'D':
  (x, y) = (x, y - 1)
```
At the end of the iteration if the coordinate (x, y) = (0, 0) the output will be true, otherwise false.
