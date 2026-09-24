#include<stdio.h>
int sum(int n);
int main()
{
   int result = sum(10);
   printf("The sum is: %d\n", result);
    return 0;
}
int sum(int n){
    int total = 0;
    for(int i=1;i<=n;i++){
        total=total+i;
    }
    return total;
}