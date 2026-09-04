#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("enter a : ");
    scanf("%d",&a);
     
    printf("enter b : ");
    scanf("%d",&b);

    temp=a; 
    a=b;
    b=temp;

    printf("swapped value of a : %d\n",a);
    printf("swapped value of b : %d\n",b);
   
      return 0;
}