#include<stdio.h>
int add();
int main()
{
	add();
}
int add()
{
	int a,b,sum;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
}