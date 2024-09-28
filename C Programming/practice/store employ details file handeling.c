#include<stdio.h>
void main()
{
	FILE *a;
	a=fopen("Employee.txt","w");
	struct employee{
		char name[30];
		int salary;
	}e[10];
	int i;
	printf("Enter 10 employee name and salary:\n");
	for(i=0;i<10;i++)
	{
		scanf("%s %d",e[i].name,&e[i].salary);
	}
	fprintf(a,"Employee details are\n");
	for(i=0;i<10;i++)
	{
		fprintf(a,"Name=%s \t Salary=%d \n",e[i].name,e[i].salary);
	}
}