#include<stdio.h>
void swap(int*a,int *b)
{
    int temp = *a ;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=30,temp;
    swap(&a,&b);
    printf("swaped value of a : %d\n ",a);
    printf("swaped value of b : %d\n ",b);

}