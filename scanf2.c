#include <stdio.h>
 
int main(void)
{
    int count;
    double price;
    long code;
    printf("Enter product data: ");
    scanf("%ld %d %lf", &code, &count, &price);
    printf("Product code: %ld \tcount: %d \tprice: %.2lf\n", code, count, price);
    return 0;
}