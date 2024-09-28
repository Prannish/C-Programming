#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter 5 number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n The array you entered");
	
	for(i=0;i<5;i++)
	{
		printf("\n %d",a[i]);
	}
}
