#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&a,&b);
	printf("***MENU***\n");
	printf("1.Sum\n2.Difference\n3.Product\n4.Division\n5.Remainder\n");
	printf("Choose a number:");
	scanf("%d",&c);
	switch (c)
	{
	case 1:
	printf("Sum is %d.",a+b);
	break;
	case 2:
	printf("Difference is %d.",a-b);
	break;
	case 3:
	printf("Product is %d.",a*b);
	break;
	case 4:
	printf("Division is %d.",a/b);
	break;
	case 5:
	printf("Remainder is %d.",a%b);
	break;
	default :
	printf("only 5 options are given");
	}
}