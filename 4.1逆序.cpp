#include <stdio.h>
int main(void)
{
	int n,a,b;
	printf("Enter a two-digit number: ");
	scanf("%d",&n);
	
	a=n%10;
	b=n/10;
	printf("The reversal is:%d%d",a,b);
	
	return 0;
	
 } 
