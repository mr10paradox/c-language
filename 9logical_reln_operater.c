#include<stdio.h>

    int main(){
    
    int age;

    printf("enter the age\n");
    scanf("%d", &age);

    if( age>18 && age<70){ // > or < is relational operator and && is logical operator

        printf("age is above 18 and less then 70 u can drive\n");

    }

    else{

        printf(" age is less than 18 and above 70 u cannot drive");
    }


    return 0;
}