#include<stdio.h>
int main()
{
    int i,a[5]={10,20,80,40,50};
    int max=a[0];
    int n= sizeof(a)/sizeof(a[0]);
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("maximum element in array : %d",max);
return 0;
}