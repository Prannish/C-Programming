#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j;
	printf("Enter 2*2 matrix a\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2*2 matrix b\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Sum of 2*2 matrix a and b is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
	printf("\n");
	}
	
}