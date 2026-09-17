#include<stdio.h>
int main()
{
    int i,a[5]={1,2,3,4,5};
    int position=2;
    printf("array before deletion : ");
    for(i=0;i<5;i++)
    { 
        printf("%d ", a[i]);
    }
    printf("\narray after deletion : ");
    for(i=position;i<4;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<4;i++){
        printf("%d ", a[i]);
    }
    return 0;
}