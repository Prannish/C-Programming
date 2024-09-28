#include<stdio.h>
#define max 50
int main()
{
	int a[max][max],b[max][max],product[max][max];
	int arow,acolumn,brow,bcolumn;
	int i,j,k;
	int sum=0;
	
	printf("Enter the rows and columns of matrix a:");
	scanf("%d %d",&arow,&acolumn);
	
	printf("Enter the elements of matrix a:\n");
	for(i=0;i<arow;i++)
		{
		for(j=0;j<acolumn;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
	
	printf("Enter the rows and columns of matrix b:");
	scanf("%d %d",&brow,&bcolumn);
	if(brow!=acolumn)
	{
		printf("Sorry! We cannot multiply the matrix a and b");
	}
	else
	{
		printf("Enter the element of matrix b:\n");
		for(i=0;i<brow;i++)
		{
		for(j=0;j<bcolumn;j++)
			{
			scanf("%d",&b[i][j]);
			}
		}
	}
	printf("\n");
	
		for(i=0;i<arow;i++)
		{
			for(j=0;j<bcolumn;j++)
			{
				for(k=0;k<brow;k++)
				{
					sum+=a[i][k]*b[k][j];
				}
				product[i][j]=sum;
				sum=0;
			}
		}
	
	
	printf("Resultant matrix of a and b is \n");
		for(i=0;i<arow;i++)
		{
			for(j=0;j<bcolumn;j++)
			{
			printf(" %d",product[i][j]);
			}
		printf("\n");	
		}
	
	
	
}