#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num, i, sum = 0;  
    printf("Enter a positive number: ");  
    scanf("%d", &num);  
    i = 0;  
    do  
    {  
        sum = sum + i; 
        i++;   
    } while (i <= num);   #include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num, i, sum = 0; // initialize and declare the local variables  
    printf("Enter a positive number: ");  
    scanf("%d", &num); // take a value up to which find the sum of natural number  
    i = 0;  
    do  
    {  
        sum = sum + i; // store the sum of natural number  
        i++; // increment by 1    
    } while (i <= num); // define the while loop and i should be less than num  
      
    // print the sum of natural number  
    printf(" \n Sum of first %d natural number is : %d", num, sum);  
    getch();  
} 
      
  
    printf(" \n Sum of first %d natural number is : %d", num, sum);  
    getch();  
} 