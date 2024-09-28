#include<stdio.h>
int main()
{
	int centigrade, fahrenheit;
	printf("Enter Centigrade:");
	scanf("%d",&centigrade);
	fahrenheit=1.8*centigrade+32;
	printf("The centigrade into fahrenheit is %d",fahrenheit);
}