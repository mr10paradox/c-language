// program to print numbers using while loop.
#include<stdio.h>

    int main(){
    
    int a ;
    scanf("%d", &a);
    //a=11;
    //while(a>11)----> this lead to infinite loop.
    while(a<=10){ 
        printf("%d\n",a);
        a++;
    }

    return 0;
}