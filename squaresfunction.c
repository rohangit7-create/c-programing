#include <stdio.h>
    void sq(int n);
    int main()
    {
        sq(7);
        return 0;
    }
void sq(int n){
    int sq=n*n;
    printf("%d",sq);
}
