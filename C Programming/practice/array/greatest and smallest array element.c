#include<stdio.h>
int main()
{
	int a[10],i,great=0;
	printf("Enter elements of array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int small=a[0];
	for(i=0;i<10;i++)
	{
	if(great<a[i])
	{
		great=a[i];
	}
	if(small>a[i])
	{
		small=a[i];
	}
	}
	printf("\nGreatest element of array is %d",great);
	printf("\nSmallest element of array is %d",small);
}