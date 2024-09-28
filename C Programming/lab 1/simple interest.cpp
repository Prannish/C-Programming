#include<stdio.h>
int main()
{
	float p,t,r,si,a;
	printf("\nProgram to calculate simple interest\nEnter principle:");
	scanf("%f",&p);
	printf("Enter time:");
	scanf("%f",&t);
	printf("Enter rate:");
	scanf("%f",&r);
	si=(p*t*r)/100;
	a=si+p;
	printf("The simple interest is : %f and amount is %f",si,a);
	}