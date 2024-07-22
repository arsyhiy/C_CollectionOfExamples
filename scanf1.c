#include <stdio.h>
 
int main(void)
{
    double price;
    long code;
    printf("Enter the product code: ");
    scanf("%ld", &code);
    printf("Enter the price: ");
    scanf("%lf", &price);
    printf("Product code: %ld \t price: %.2lf \n", code, price);
    return 0;
}