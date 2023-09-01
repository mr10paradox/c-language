#include<stdio.h>
#include<math.h>

    int main(){
    int a = 4;
    int b = 8;

    printf("the value of a + b is %d\n", a + b);
    printf("the value of a - b id %d\n", a - b);
    printf("the value of a * b is %d\n", a * b);
    printf("the value of a / b is %d\n", a / b);

    int z;
    z = b * a; // legal
   // b * a = z; // illegal
   printf(" the value of z is %d\n", z);

   // no operater is assumed to be present
   // printf(" the value of 4 * 5 is %d\n", 4.5);   wrong
   printf("the value of 4 * 5 is %d\n", 4 * 5);

   // there is no operater to perform exponentian in c
   // printf(" the value of 4 * 5 is %d\n", 4^5);
   // if we need to use exponentiation use pow in %f and add #include<math.h>
   printf(" the value of 4 to the power 5 is %f", pow(4,5));
   
   return 0;

}