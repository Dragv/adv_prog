# Kata 5: Infographic
### You want to build a word cloud, and infographic where the size of a word corresponds to how often it appears in the body text.
To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table, where the keys are words and the values are the number of times the words occurred.
Think about capitalized words. For example, look at these sentences:
```
"After beating the eggs, Dana read the next step:"
"Add milk and eggs, then add flour and sugar."
```
What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of  2

#Solution

The solution of this kata is quite simple. Using the hash table done in class, we can simply receive an input. Reading the char of the string until the end symbol is reached, having a temporal char pointer to store the sequence of chars different than a space until a space is reached. After that the temporal variable is added to the hash table with a value of 1 or the previous value plus one.
