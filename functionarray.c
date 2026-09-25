#include <stdio.h>
void fun(int arr[]){
    arr[0]=100;
}
int main()
{
    int arr[]={1,3,4,6,7};
    fun(arr);
  for(int i = 0; i < 5; i++)
   {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}