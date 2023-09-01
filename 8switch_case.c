// concept of switch case using c.
  #include<stdio.h>

    int main(){

        int a, b;
        char c;

        printf("enter the operants ( +, - , * , /):  " );
        scanf("%c", &c);

        printf("enter the value of a\n");
        scanf("%d", &a);

        printf("enter the value of b\n");
        scanf("%d", &b);

        switch (c) 
        {
             case '+' :
            printf("the sum of a and b is %d", a+b);
            break ;

            case '-' :
            printf("the sum of a nd b is %d", a-b);
            break ;

            case '*' :
            printf("the product of a and b is %d", a*b);
            break ;

            case '/' :
            printf("the division of a and b is %d", a/b);
            break ;


             default : 
             printf("invalid operation. \n");
            


        }

    return 0;
}