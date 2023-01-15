#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows:");
    scanf("%d", &n);
    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=n; c++)
    {
    printf("%d", r);
    }
    printf("\n");
        
    }
    return 0;
}