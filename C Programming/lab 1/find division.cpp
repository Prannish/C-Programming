#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n Program to find the result\n Enter your marks:");
	scanf("%d",&a);
	if (a<40)
	printf("You failed");
	else if (a<55)
	printf("Third division");
	else if (a<75)
	printf("Second division");
	else if (a<=90)
	printf("First division");
	else if (a<101)
	printf("distinction");
	else if (a>=101)
	printf("Error");	
}