#include<stdio.h>
int main()
{
    char operator;      
    double first, second;

    printf("Enter an operator(+, -, *, /):  ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

// Calculator using switch case
    switch(operator)
    {
        case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
        case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
        case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
        case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        default:
        printf("ERROR! operator is not correct");
        
    }
    return 0;
}