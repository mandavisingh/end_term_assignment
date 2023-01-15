#include<stdio.h>
int main()
{
	int x,y,z;
	x=34;
	y=55;
	int a=10, b=20;
	
	// swapping numbers WITHOUT using third variable
	printf("Before swap a=%d b=%d\n", a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\nAfter swap a=%d b=%d\n", a,b);
	
	// swapping number WITH using third vrable
	printf("\nNumber before swap: x=%d y=%d\n", x,y);
	z = x;
	x = y;
	y = z;
	printf("\nNumber after swap: x=%d y=%d\n", x,y);
	
	return 0; 
}
