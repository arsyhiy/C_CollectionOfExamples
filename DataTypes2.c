#include <stdio.h>
  
int main(void)
{
    unsigned short number1 = 1u; 
    unsigned short int number2 = 2u;  
    short number3 = 3; 
    short int number4 = -4;  
    signed short number5 = 5;  
    signed short int number6 = -6;  
 
    long number7 = -2147483648l;
    long int number8 = -2147483648L;
    signed long number9 = 2147483647l;
    signed long int number10 = 2147483647L;
 
    unsigned long number11 = 4294967295ul;
    unsigned long int number12 = 4294967295UL;
 
    long long number13 = -9223372036854775807ll;
    long long int number14 = 9223372036854775807ll;
    signed long long number15 = -9223372036854775807LL;
    signed long long int number16 = 9223372036854775807LL;
 
    unsigned long long number17 = 18446744073709551615ull;
    unsigned long long int number18 = 18446744073709551615ULL;
    
    printf("number1 = %hu\n", number1);
    printf("number2 = %hu\n", number2);
    printf("number3 = %d\n", number3);
    printf("number4 = %d\n", number4);
    printf("number5 = %d\n", number5);
    printf("number6 = %d\n", number6);
    printf("number7 = %ld\n", number7);
    printf("number8 = %ld\n", number8);
    printf("number9 = %ld\n", number9);
    printf("number10 = %ld\n", number10);
    printf("number11 = %lu\n", number11);
    printf("number12 = %lu\n", number12);
    printf("number13 = %lld\n", number13);
    printf("number14 = %lld\n", number14);
    printf("number15 = %lld\n", number15);
    printf("number16 = %lld\n", number16);
    printf("number17 = %llu\n", number17);
    printf("number18 = %llu\n", number18);
    return 0;
}
