#include<stdio.h>
int main()
{
    int a[5]={23,87,20,86};
    int key,found = 0;
    printf("enter a key to be found : ");
    scanf("%d",&key);
    for(int i=0;i<5;i++){
        if(a[i]==key){
           found = 1;
            break;
        }
    }
        if(found==0) printf("not found");
        else printf("found");
    return 0;
}