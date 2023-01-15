#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=n; c++)
        {
            if(r%2==0)
            printf("%c", r+64);
            else
            printf("%c", r+96);
        }
        printf("\n");
    }


    return 0;
}