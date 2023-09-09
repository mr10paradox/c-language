// program to print marks of students bt taking input from user.
#include<stdio.h>

    int main(){
    int marks[5];

    for(int i=0;i<5;i++){
        printf("the marks of students %d is :",i+1);
        scanf("%d",&marks[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("the marks of student %d is %d\n" ,i+1,marks[i]);

    }
    return 0;
}