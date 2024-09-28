#include<stdio.h>
int add(int var1,int var2);
int main()
{
	int a,b,sum;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	sum=add(a,b);
	printf("sum=%d",sum);
}
int add(int var1,int var2)
{
	int c;
	c=var1+var2;
	return c;
}