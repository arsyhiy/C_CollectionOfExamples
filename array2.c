#include <stdio.h>
 
int main(void)
{
    int numbers[] = { 5, 6, 7};
    size_t size = sizeof(numbers);
    size_t count = sizeof(numbers) / sizeof(int);
    printf("numbers size: %zu \n", size);       // numbers size: 12
    printf("numbers count: %zu \n", count);         // numbers count: 3
    return 0;
}