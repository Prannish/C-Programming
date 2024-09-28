#include <stdio.h>
int main()
	{
    int n,rem,arm=0,c;
    printf("Enter an number: ");
    scanf("%d", &n);
    c=n;
    while(n!=0)
    {
    rem=n%10;
	arm=arm+rem*rem*rem;
	n=n/10;	
	}
	if(c==arm)
	{
        printf("It is armstrong");
    }
    else
    {
    	printf("It is not armstrong");
	}
}