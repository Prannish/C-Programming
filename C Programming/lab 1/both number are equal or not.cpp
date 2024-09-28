#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two numbers:");
	scanf("%d%D",&a,&b);
	if (a==b)
	printf("Both are equal");
	else
	printf("Both are not equal");
}