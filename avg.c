#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int i;
    float sum=0;
    float avg=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        avg=(sum)/a[i];
    }
    printf("sum of array is : %.2f",sum);
    printf("\naverage of array is : %.2f",avg);
    return 0;
}