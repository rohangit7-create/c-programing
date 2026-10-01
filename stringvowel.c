#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int vowels = 0;
    int i = 0;
    printf("enter a string : ");
    scanf("%s",&str);
    while(str[i]!='\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || 
            str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
            str[i] == 'u') 
       {
        vowels++;
       }
       i++;
    }
    printf("%d",vowels);
    return 0;
}