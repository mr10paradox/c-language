// program of using else if statement 
#include<stdio.h>

    int main(){
     
     int a;
     printf("enter the value of a\n");
     scanf("%d", &a);
     
     if(a%2==0)
     {
        printf("%d is even\n", a);
     }
     else{
        printf("%d is odd\n", a);
     }
    return 0;
}