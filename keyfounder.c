#include<stdio.h>
int main()
{
    int a[5]={23,87,20,86,45};
    int key=86;
    for(int i=0;i<5;i++){
        if(a[i]==key){
            printf("key found at : %d",i);
            break;
        }
    }
    return 0;
}