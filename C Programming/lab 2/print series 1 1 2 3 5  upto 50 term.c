#include<stdio.h>
main()
{
	int i,a=1,b=1,c;
	for(i=1;i<=50;i++)
	{
	printf("%d\t",a);
	c=a+b;
	a=b;
	b=c;
	}
}