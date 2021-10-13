#include <stdio.h>
int main(void)
{
	int n,m,a;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&n,&m);
	
	a=n-12;
	if(n>=0&&n<12)
		printf("Equivalent 12-hour time: %d:%.2d AM",n,m);
	else if(n==12)
		printf("Equivalent 12-hour time: %d:%.2d PM",n,m);
	else if(n>12&&n<24)
		printf("Equivalent 12-hour time: %d:%.2d PM",a,m);
	else if(n==24)
		printf("Equivalent 12-hour time: %d:%.2d AM",a,m);	
		
	return 0;
	
	
}
