// example of a function calling by referencee
#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

    int main(){
         int x=4,y=7;
        printf("the value of x and y before swap is %d and %d\n",x,y);

        wrong_swap(x,y);// will not work due to call by value

        printf("the value of x and y  after swap is %d and %d\n",x,y);

        swap(&x,&y);// will work due to call by reference
         printf("the value of x and y  after swap is %d and %d\n",x,y);



    
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}