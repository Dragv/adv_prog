#include <stdio.h>
#include <string.h>

int main() {
  int c;
  int x, y = 0;
  do {
    c = getchar();
    if (c == 'R') {
      x += 1;
    } else if (c == 'L') {
      x -= 1;
    } else if (c == 'U') {
      y += 1;
    } else if (c == 'D') {
      y -= 1;
    }
  } while (c != '\0');

  if (x == 0 && y == 0) {
    printf("True\n");
  } else {
    printf("False\n");
  }
  return 0;
}
