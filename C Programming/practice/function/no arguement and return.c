#include<stdio.h>
int add();
int main()
{
	int sum;
	sum=add();
	printf("sum=%d",sum);
}
int add()
{
	int a,b,sum;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	return sum;
}