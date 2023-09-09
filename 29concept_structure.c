/* A structure is a grouping of variables of various data type referenced by
the same name*/ 

#include<stdio.h>
#include<string.h>

// struct is the keyword to initialize structure
 struct employee{
        int id;
        float salary;
        char name[10];
    };

    int main(){
        struct employee e1;
        e1.id = 100;
        e1.salary= 123.45;
        // e1.name = "paradox">>> won't work
        strcpy(e1.name,"paradox");

        printf("%d\n",e1.id);
        printf("%f\n",e1.salary);
        printf("%s\n",e1.name);

        //  another way to init structure
        // struct employee tom = {100,34.2,"tom"};
        //  printf("%d\n",tom.id);
        // printf("%f\n",tom.salary);
        // printf("%s\n",tom.name);
    return 0;
}