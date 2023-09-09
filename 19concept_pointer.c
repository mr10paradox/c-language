// pointer is a variable which stores the address of another variable.
#include<stdio.h>

    int main(){
    int i=34;
    int *j = &i;// * is used to in_it pointer which stores the address.
    
    printf("the value of i is%d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",j);
    printf("the address of j is %u\n",&j);
    printf("the value of j is %u\n",*(&j));

    return 0;
}