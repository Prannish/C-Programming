#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i,j;
	printf("Enter elements of first array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elements of second array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("\nAfter swapping first array:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nAfter swapping second array:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",b[i]);
	}
	
}