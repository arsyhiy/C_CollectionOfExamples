#include <stdio.h>

int main(void) {
  int x = 5;
  int y = 2;

  int z = x > y ? x - y : x + y;

  printf("z = %d", z); // z = 3
  return 0;
}
