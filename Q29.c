#include <stdio.h>

int main()
{
    int i;

    // Total ASCII values are from 0 to 255 
    for(i=0; i<=255; i++) 
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}