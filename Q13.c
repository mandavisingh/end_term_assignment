#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
{
    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :

        printf("%C is a Vowel. \n", ch);
        break;

        default:
        printf("%c is a Constant. \n", ch);
    }
    }
    else
    {
        printf("%c is not an Alphabet. \n", ch);
    }
    return 0;
}