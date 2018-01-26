#include <stdio.h>
#include "operations.h"

void printTestMessage(int, char *, char *);

int main() {
  //Test addition
  int a = 2147483644;
  int b = 2;
  int result = add(a,b);
  int expected = a + b;
  printTestMessage(result == expected, "Addition test passed", "Addition test failed");

  int resultSubstraction = substraction(a,b);
  int expectedSubstraction = a - b;
  printTestMessage(resultSubstraction == expectedSubstraction, "Addition test passed", "Addition test failed");

  return 0;
}

void printTestMessage(int testResult,
                      char *passedMessage,
                      char *failedMessage)
{
  if (testResult) {
    printf("%s\n", passedMessage);
  } else {
    printf("%s\n", failedMessage);
  }
}
