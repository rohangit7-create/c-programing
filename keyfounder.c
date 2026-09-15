#include<stdio.h>
int main()
{
    int a[5]={23,87,20,86};
    int key=20;
    for(int i=0;i<5;i++){
        if(a[i]==key){
            printf("key found");
            break;
        }
    }
    return 0;
}