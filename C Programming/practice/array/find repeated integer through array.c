//array program to find whther number is repeated or not
#include<stdio.h>
int main()
{
	int seen[10]={0};
	int N;
	printf("Enter the number:");
	scanf("%d",&N);
	int rem;
	while(N>0)
	{
		rem=N%10;
		if(seen[rem]==1)
		break;
		seen[rem]=1;
		N=N/10;
	}
	if(N>0)
	{
		printf("Yes, number is repeated");
	}
	else
	{
		printf("No, number is not repeated");
	}
}
