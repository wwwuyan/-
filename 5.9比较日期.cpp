#include <stdio.h>
int main(void)
{
	int a,b,c,i,j,k;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d",&a,&b,&c);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d",&i,&j,&k);
	
	if(c<k) 
	printf("%d/%d/%.2d is earlier than %d/%d/%.2d",a,b,c,i,j,k);
	else if(c>k) printf("%d/%d/%.2d is earlier than %d/%d/%.2d",i,j,k,a,b,c);
	else if(c=k)
	{
		if(b<j) 
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d",a,b,c,i,j,k);
		else if(b>j) printf("%d/%d/%.2d is earlier than %d/%d/%.2d",i,j,k,a,b,c);
		else if(b=j)
		{
			if(a<i) 
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d",a,b,c,i,j,k);
			else if(a>i) printf("%d/%d/%.2d is earlier than %d/%d/%.2d",i,j,k,a,b,c);
		}
	}
	
	return 0;
}
