#include <stdio.h>

int setBitNumber(int n)
{
	if (n == 0)
		return 0;

	int msb = 0;
	n = n / 2;
	while (n != 0) {
		n = n / 2;
		msb++;
	}

	return (1 << msb);
}
int main() {

	int n = 0;
	printf("%d \n",setBitNumber(n));
	n = ~(int)0; 
	int ns = (unsigned int)setBitNumber(n);
	printf("%d",ns);

	return 0;
}
