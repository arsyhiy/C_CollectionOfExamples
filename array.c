#include <stdio.h>
 
int main(void)
{
    int numbers[4];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
     
    printf("numbers[0] = %d \n", numbers[0]);   // 1 - первый элемент
    printf("numbers[2] = %d \n", numbers[2]);   // 3 - третий элемент
    return 0;
}