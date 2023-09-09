// example of a function calling by value.
#include<stdio.h>
int sum(int a, int b);

    int main(){
        int x=5,y=8;
        printf("the value of x+y is %d\n",sum(x,y));
        printf("the value of x and y is %d and %d\n",x,y);

    
    return 0;
}
int sum(int a, int b){
    return a+b;
}