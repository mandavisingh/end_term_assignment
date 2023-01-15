#include<stdio.h>

int main()
{
	float eng, phy, chem, math, comp;
	float total, average, percentage;
	
	printf("Enter marks of eng:");
	scanf("%f", &eng);
	printf("Enter marks of phy:");
	scanf("%f", &phy);
	printf("Enter marks of chem:");
	scanf("%f", &chem);
	printf("Enter marks of math:");
	scanf("%f", &math);
	printf("Enter marks of comp:");
	scanf("%f", &comp);
	
	total = eng + phy + chem + math + comp;
	average = total/ 5.0;
	percentage = (total/500.0)*100;
	
	printf("Total marks= %.2f\n", total);
	printf("Average marks= %.2f\n", average);
	printf("Percentag = %.2f", percentage);
	
	if(percentage<0 || percentage>100)
	{
		printf("\n Don't be smart, Enter your marks betwen limit\n");
	}
	else if(percentage<50)
	{
		printf("\n FAIL");
	}
	else if(percentage>=50 && percentage<60)
	{
		printf("\n GRADE D");
	}
	else if(percentage>=60 && percentage<70)
	{
		printf("\n GRADE C");
	}
	else if(percentage>=70 && percentage<80)
	{
		printf("\n GRADE B");
	}
	else if(percentage>=80 && percentage<90)
	{
		printf("\n GRADE A");
	}
	else
	{
		printf("\n GRADE A+");
	}
	return 0;
	
}
