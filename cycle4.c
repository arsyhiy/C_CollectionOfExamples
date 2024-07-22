#include <stdio.h>
int main(void) {
  int result = 0;
  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0)
      continue;
    result += i;
  }
  printf("result = %d", result);
  return 0;
}
