#include<stdio.h>
int main()
{
    char str[9]="aabbbhxy";
    int freq[26]={0};
    int max=freq[0];
    int i;

    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]-'a']++;
    }
    for(int i =0;i<26;i++)
    {
        if(freq[i]!=0)
        {
        printf("%c : %d\n",'a' +i,freq[i]);
        }
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(max<freq[i])
        {
            max = freq[i];
        }
    }
    printf("%d",max);
    return 0;

}