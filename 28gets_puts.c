// program to take string as input and to print it.
#include<stdio.h>

    int main(){
    char s[34];
    printf("enter your name :");
    // scanf("%s",&s);
    gets(s);// gets is used to take input


    puts(s);// puts is used to print the string
    // printf("your name is %s",s);
    
    return 0;
}