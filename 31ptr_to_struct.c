// program to use pointer with structure.
#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    float salary;
    char name[10];
};
#include<stdio.h>

    int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101; you can also write in this way
    ptr->id = 101; // arrow operater
    printf("%d",e1.id);
    return 0;
}