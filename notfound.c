#include<stdio.h>
int main()
{
    int a[5]={23,87,20,86};
    int key=20,found = 0;
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