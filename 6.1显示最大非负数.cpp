#include <stdio.h>
int main(void)
{
	printf("Enter a number: ");
	float i,m;
	m=0;
	scanf("%f",&i);
	while(i>0)
	{
		printf("Enter a number:");
		scanf("%f",&i);
		if(i>m)
		m=i;
		
	} 
	printf("The largest number entered was %f",m);
	return 0;
 } 
 
