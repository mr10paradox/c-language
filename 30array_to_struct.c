// program to use array with structure.
#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    float salary;
    char name[10];
};
    int main(){
        struct employee facebook[100];

        facebook[0].id = 100;
        facebook[0].salary = 123.45;
        strcpy(facebook[0].name,"harsh");

        facebook[1].id = 101;
        facebook[1].salary = 123.46;
        strcpy(facebook[1].name,"rohan");

        facebook[2].id = 102;
        facebook[2].salary = 123.47;
        strcpy(facebook[2].name,"rahul");

    
    return 0;
}