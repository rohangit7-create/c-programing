#include <stdio.h>
int main()
{
    int a,b;
    int sum,multiply,divide,substract;
    char operation;

     printf("what operation you want to perform : ");
    scanf("%c",&operation);

    printf("enter the value of a : ");
    scanf("%d",&a);

      printf("enter the value of b : ");
    scanf("%d",&b);

    sum = a+b;
    multiply = a*b;
    divide = a/b;
    substract = a-b;

    if(operation=='+')
    {
        printf("%d",sum);
    }
     else if(operation=='-')
    {
        printf("%d",substract);
    }
    else if(operation=='*')
    {
        printf("%d",multiply);
    }
    else if(operation=='/')
    {
        printf("%d",divide);
    }
    else 
    {
       printf("operation is wrong"); 
    }

      return 0;

}