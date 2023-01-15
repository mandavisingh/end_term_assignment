#include<stdio.h>
int main()
{
	int a, b, c;
	a=60;
	b=50;
	printf("the first angle of triangle = %d \n", a);
	printf("the second angle of triangle = %d\n", b);
	
	c=180-(a+b);
	printf("the third angle = %d\n", c);
	
	return 0;
}
