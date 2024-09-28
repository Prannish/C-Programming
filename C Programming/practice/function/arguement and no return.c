#include<stdio.h>
int add(int var1,int var2);
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	add(a,b);
}
int add(int var1,int var2)
{
	int c;
	c=var1+var2;
	printf("sum=%d",c);
}