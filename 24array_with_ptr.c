// program to print marks of students bt taking input from user.
#include<stdio.h>

    int main(){
    int marks[4];
    int *ptr;
   // ptr = &marks[0];
    ptr = marks;// can be done also in this way.

    for(int i=0;i<4;i++){
        printf("enter the value of marks of student : %d is ",i+1);
        scanf("%d",ptr);
        ptr++;

    }
    for(int i=0;i<4;i++){
        printf(" the  marks of student %d is %d\n",i+1,marks[i]);
        

    }
    return 0;
}