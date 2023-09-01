// concept of continue statement in loop.
#include<stdio.h>

    int main(){
    
    int skip=5, i=0;
    
    while(i<10){
        i++;
        if(i != skip){
            continue;// it is used to skip the current iteration.
        }
        else{
            printf("%d\n", i);
        }
    }

    return 0;
}