#include <stdio.h>
#include <ctype.h>

int condition1Checker(int length){
  if(length > 20){
    return length - 20;
  }
  if(length < 6){
    return 6 -length;
  }
  return 0;
}

int condition2Checker(char *password){
  int upper = 0;
  int lower = 0;
  int digit = 0;
  for (unsigned i = 0; i < sizeof(password)/sizeof(char); i++) {
    if (isdigit(password[i]) != 0){
         digit = 1;
     } else if (isalpha(password[i])){
         if (isupper(password[i])) {
           upper = 1;
         } else {
           lower = 1;
         }
     }
  }
  if (upper == 1 && lower == 1 && digit == 1) {
    return 0;
  } else {
    int counter = 0;
    if (upper == 0) {
      counter ++;
    }
    if (lower == 0) {
      counter ++;
    }
    if (digit == 0) {
      counter ++;
    }
    return counter;
  }
}

int condition3Checker(char *password){
  int counter = 0;
  int toReturn = 0;
  for (unsigned i = 1; i < sizeof(password)/sizeof(char); i++) {
    if (password[i] == password[i-1]) {
      counter++;
      if (counter == 3){
        toReturn++;
        counter = 0;
      }
    } else {
      counter = 0;
    }
  }
  return toReturn;
}

int strongPasswordChecker(){
  printf("%s\n", "Enter a password");
  char password[200];
  scanf("%s\n", password);

  int first = condition1Checker(sizeof(password)/sizeof(char));
  int second = condition2Checker(password);
  int third = condition3Checker(password);

  if (first == 0 && second == 0 && third == 0) {
    return 0;
  } else if (first != 0 && second == 0 && third == 0) {
    return first;
  } else if (first == 0 && second != 0 && third == 0) {
    return second;
  } else if (first == 0 && second == 0 && third != 0) {
    return third;
  } else if (first == 0 && second != 0 && third != 0) {
    return second;
  } else if (first != 0 && second == 0 && third != 0) {
    if (sizeof(password)/sizeof(char) < 6) {
      return first;
    } else {
      if (third > first) {
        return third - first;
      } else {
        return first - third;
      }
    }
  } else if (first != 0 && second != 0 && third == 0) {
    if (first > second) {
      return first;
    } else if (first < second){
      return second;
    } else {
      return first;
    }
  } else if (first != 0 && second != 0 && third != 0) {
    if (sizeof(password)/sizeof(char) < 6) {
      return second;
    } else {
      return second + first;
    }
  }
}

int main() {
  strongPasswordChecker();

  return 0;
}
