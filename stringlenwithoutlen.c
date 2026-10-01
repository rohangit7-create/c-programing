#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int length = 0;
    printf("enter a string : ");
    scanf("%s",&str);
    while(str[length]!='\0')
    {
        if(str[length]=='\n')
        {
            break;
        }
        length++;
    }
    printf("%d",length);
    return 0;
}