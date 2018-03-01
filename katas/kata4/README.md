# Valid Number

Validate if a given string is numeric.

Some examples:
```
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
```

# Solution

Creating a Deterministic Finite Automata would be the simplest solution since the states and it's relations can be represented in a 2 dimension array and this simplifies the change of states in the Automata representation. Here's the automata used for this problem (n = any digit, _ = a blank space, ):

![](https://raw.githubusercontent.com/Dragv/adv_prog/master/katas/kata4/kata4.png)
