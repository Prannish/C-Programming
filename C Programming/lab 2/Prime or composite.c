#include<stdio.h>
main()
{
	int n,count=0,i;
	printf("Enter number to check whether number is prime or composite:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if (count==2)
	printf("It is prime");
	else
	printf("It is Composite");
}