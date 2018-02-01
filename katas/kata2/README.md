# Strong Password Checker

A password is considered strong if below conditions are all met:

It has at least 6 characters and at most 20 characters.
It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).
Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

## Solutions

Crazy enough, the way I figured to do this is by breaking the problem into all the possible cases. Maybe I broke them down too much and theres a way to simplify the cases but here we go.

## Cases

### It has at least 6 characters and at most 20 characters.

#### Condition 2 and 3 aren't met

Awesome condition 1 is met but sadly the condition 2 and 3 don't so not so awesome really. With the condition number two we see quite a bit of cases since there are 3 variables in play. That's why I built a truth table to define all this cases and make sure none of them get missed out and based on it the number of changes that has to be made respecting to the second condition. Now with the third condition we can count how many times a character is repeated in a line and if its more than 3 we determine that there needs to be a change. If the amount of change from condition 2 are more than the changes for condition 3 then we can dismiss condition 3 because with the changes for condition 2 we can cover the other ones.

#### Condition 2 isn't met

We follow the previously mentioned truth table and we are good.

#### Condition 3 isn't met

We can count how many times a character is repeated in a line and if its more than 3 we determine that there needs to be a change.

### It contain at least one lowercase letter, at least one uppercase letter, and at least one digit.

#### Condition 1 and 3 aren't met

Oh no another time we only meet one condition. It's okay now that we know how to deal with them this should be quite simple. For condition 1 I came up with and awesome super genius, simple if... Here we go!
```
if(length > 20){
  return length - 20;
}
if(length < 6){
  return 6 -length;
}
```
This will give us the amount of characters that need to be added or taken out to get the desire range of length.
Using this number we do the same thing we did previously. We count how many time a substring has repeating characters and if its more than 3 we add 1 to our counter of changes. In the case in which its smaller than 6 we can just get 1 change because adding another character in the substring will satisfy all the conditions. Now when it is longer than 20 we get how many characters we need to remove if the amount of repeated characters is larger than the amount to be deleted we subtract the repeated characters and then we divide that answer by 3 and thats the amount of changes needed.

#### Condition 1 isn't met

```
if(length > 20){
  return length - 20;
}
if(length < 6){
  return 6 -length;
}
```

#### Condition 3 isn't met

We can count how many times a character is repeated in a line and if its more than 3 we determine that there needs to be a change.

### It must doesn't contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met)

#### Condition 1 and 2 aren't met

To get the amount of characters remove or added:

```
if(length > 20){
  return length - 20;
}
if(length < 6){
  return 6 -length;
}
```

We use the truth table to get the amount of changes depending the case and if its smaller than 6 we can get the return from the previous function and based on that determine which cases of condition 2 can make one less change from the first condition.

#### Condition 1 isn't met

```
if(length > 20){
  return length - 20;
}
if(length < 6){
  return 6 -length;
}
```

#### Condition 2 isn't met

Truth table.

## Solution

That's it, the reading of the string is the thing that would take more time but it is fine because that brings the whole thing at a O(n) complexity.
