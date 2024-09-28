#include <stdio.h>
int main()
	{
    int n,rem,rev=0,c;
    printf("Enter an number: ");
    scanf("%d", &n);
    c=n;
    while(n!=0)
    {
    rem=n%10;
	rev=rev*10+rem;
	n=n/10;	
	}
	if(c==rev)
	{
        printf("It is Palindrome");
    }
    else
    {
    	printf("It is not Palimdrome");
	}
}