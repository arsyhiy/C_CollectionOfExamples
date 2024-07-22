#include <stdio.h>
  
int main(void)
{
    int numbers[] = { 10, 12, 13, 54, 43 };
    size_t count = sizeof(numbers) / sizeof(numbers[0]);
    // int в качестве индекса
    for(int i =0; i < count; i++)
    {
        printf("numbers[%d] = %d \n", i, numbers[i]);
    }
    return 0;
}