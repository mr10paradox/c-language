// example of using function method.
#include<stdio.h>
// sum is a function which take input as a and b and return  an integr as an output
int sum(int a, int b);// ----> function prototype declartion

    int main(){
        int c;
        c = sum(2 , 5); // function call
        printf("the value of c is %d\n", c);
    
    return 0;
}
int sum(int a, int b){ // function declaration
    int result;
    result = a + b;
    return result;
}