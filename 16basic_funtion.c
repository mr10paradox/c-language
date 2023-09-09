/*Function is a sequence of  program instructions that perform a
specific task,packaged as a unit */ 
/*THIS IS MULTI LINE COMMENT*/
#include<stdio.h>

void display();//function prototype ---> initializing function.

    int main(){
        int a;
        printf("initilizing display function\n");
        display();// function call.
        printf("display function finished it work \n");
    
    return 0;
}
void display(){ // function declaration.
    printf("this is display\n");
}