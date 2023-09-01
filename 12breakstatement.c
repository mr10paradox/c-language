// concept of break statement in loop.
#include<stdio.h>

    int main(){

       int i = 0;
    
    do{
        //  break statement is used tomterminate the loop.
        printf("the value of i is %d\n", i);
        if(i==4){
            break;
        }
        i++;
    }while(i<10);
    return 0;
}