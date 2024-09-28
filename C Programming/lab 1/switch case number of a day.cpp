#include<stdio.h>>
int main()
{
	int a;
	printf("Enter the number of day which  you wanna see of a week\n");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
		printf("Sunday");
		break;
		case 2:
		printf("Monday");
		break;
		case 3:
		printf("Tuesday");
		break;
		case 4:
		printf("Wednesday");
		break;
		case 5:
		printf("Thrusday");
		break;
		case 6:
		printf("Friday");
		break;
		case 7:
		printf("Saturday");
		break;
		Default:
		printf("There are only 7 days in a week");
	}

}