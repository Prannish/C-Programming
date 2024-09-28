#include<stdio.h>
struct emp
{
	char name[30];  
	int age,salary;
};
struct emp e[5];
int main()
{
	int i;
	printf("Enter name age salary:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s %d %d",e[i].name,&e[i].age,&e[i].salary);
	}
	printf("Name\tage\tsalary\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t%d\t%d\n",e[i].name,e[i].age,e[i].salary);
	}
}
