#include<stdio.h>
int main()
{
    int n=4,a[10]={10,20,30,40};
    int position=2;
    int value=25;
    int i;
    for(i=n;i>position;i--)
   {
    a[i]=a[i-1];
   }
    a[position]=value;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}