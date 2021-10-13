#include <stdio.h>
int main(void)
{
	int m,n,i,a,b,c,d;
	printf("Enter a fraction: ");
	scanf("%d/%d",&m,&n);
	a=m;b=n;
	while(b!=0)
	{
		i=a%b;
		a=b;
		b=i;
	}
	c=m/a;
	d=n/a;
	
	printf("In lowest terms: %d/%d",c,d);
	return 0;
	
 } 
