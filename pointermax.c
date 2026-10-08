#include<stdio.h>
int maximum(int *a,int *b)
{
    if(*a>*b)
        return *a;
    else
        return *b;
}
int main()
{
    int a = 10 ;
    int b = 20 ;
    int ans = maximum(&a,&b);
    printf("%d",ans);
    return 0;
}