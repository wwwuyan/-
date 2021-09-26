#include <stdio.h>
int main(void)
{
	float b;
	int a,m,d,y;
	printf("Enter item number: ");
	scanf("%d",&a);
	printf("Enter unit price: ");
	scanf("%f",&b);
	printf("Enter purchase date (mm/dd/yyyy): "); 
	scanf("%d/%d/%d",&m,&d,&y);
	 
	printf("Item\t\tUnit\t\tPurchase\n"); 
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%d/%d/%d",a,b,m,d,y);
	
	return 0;
 } 
