#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    fputs(str,stdout);
    for(int i = 0 ; str[i]!='\0';i++)
    {
        printf("\ncharacter index at %d is %c\n ",i,str[i]);
    }
    return 0;
}