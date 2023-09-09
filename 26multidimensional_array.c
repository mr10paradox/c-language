// program to print marks of 3 student in 5 subjects using multidimensional array
#include<stdio.h>

    int main(){
    int student = 3;
    int subject = 5;
    int marks[3][5] ; // initializing multi dimensional array.

    for(int i=0;i<student;i++){
        for(int j=0;j<subject;j++){
            printf("enter the marks of student %d in subject %d :\n ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
     for(int i=0;i<student;i++){
        for(int j=0;j<subject;j++){
            printf("the marks of student %d in subject %d is %d \n ",i+1,j+1,marks[i][j]);
            
        }
    }


    return 0;
}