#include <stdio.h>
 
int main(void)
{
    char name[10];
    // вводим имя
    printf("Enter your name: ");
    scanf("%10s", name);
     
    printf("Name: %s \n",name);
    return 0;
}