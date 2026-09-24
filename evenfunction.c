#include <stdio.h>
void even (int n);
int main(){
    even(30);
    return 0;
}
void even (int n){
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
