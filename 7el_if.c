//  program of elseif statement using c.
#include<stdio.h>

    int main(){
    
    int num;

    printf("enter your num\n");
    scanf("%d", &num);

    if(num == 1){
        printf(" your number is 1");
        
    } 

    else if (num == 2){
        printf("your number is 2");

    }

    else{
        printf("it is not 1 or 2");
    }
    return 0;
}