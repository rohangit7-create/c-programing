#include <stdio.h>
int main()
{
    char ch='a';
    float f=3.14;
    printf("%p\n",&ch);
    printf("%p", &f);
    return 0;
}