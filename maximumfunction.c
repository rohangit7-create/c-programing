#include<stdio.h>
void max(int a, int b, int c);
int main()
{
    int a=1,b=3,c=8;
    max (a,b,c);
return 0;
}
void max(int a , int b , int c){
    if(a>b && a>c)
    {
        printf("a is maximum");
    }
    else if(b>a && b>c)
    {
        printf("b is maximum");
    }
    else 
    {
        printf("c is greater");
    }
}