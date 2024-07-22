#include <stdio.h>
  
int main(void)
{
    int numbers[3] = {11, 12, 13};
    numbers[1] = 22;        // изменяем второй элемент
    printf("numbers[1] = %d", numbers[1]);  // numbers[1] = 22
    return 0;
}