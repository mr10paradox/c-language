#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

     printf("the value of 3*x - 9*8 is %d\n", 3*x - 9*8);
     printf("the value of 8*y / 3*x is %d\n", 8 * y / 3 * x);
     // 8*3 / 3*2 = 24/6 will give wrong answer
     //24/3*2 follow associatuve rule
     //8*2
     //16 --> answer

    return 0;
}