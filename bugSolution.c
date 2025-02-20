#include <stdio.h>
#include <limits.h>
int main() {
  int x = INT_MAX;
  int y = 1;
  if (x + y < x) {
    printf("Overflow detected!\n");
  } else {
    x = x + y;
    printf("%d\n", x);
  }
  return 0;
}