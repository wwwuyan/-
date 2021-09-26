#include <stdio.h>
int main(void)
{
	float a,b,c;         
	printf("Enter amount of loan: ");
	scanf("%f",&a);
	printf("Enter interest rate: ");
	scanf("%f",&b);
	printf("Enter monthly payment: ");
	scanf("%f",&c);
	
	float x,y,z;
	x=a-c+a*b/1200;
	y=x-c+x*b/1200;
	z=y-c+y*b/1200;

	printf("Balance remaining after first payment: $%.2f\n",x);
	printf("Balance remaining after second payment: $%.2f\n",y);
	printf("Balance remaining after third payment: $%.2f\n",z);
	
	return 0;
	 
	
 } 
