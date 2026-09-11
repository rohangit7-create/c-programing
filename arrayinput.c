#include<stdio.h>
int main()
{
    int i=0,a[4];
    printf("enter 4 values : \n");
    while(i<4)
    {
        scanf("%d\n",&a[i]);
        i++;
    }
    i=0;
    printf("the given values are : \n");
    while(i<4)
    {
        printf("%d\n",a[i]);
        i++;
    }

    return 0;
}