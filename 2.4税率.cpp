#include <stdio.h>
int main (void)
{
	float m,n;
	printf("Enter an amount: ");
	scanf("%f",&m);                                 //scanf����Ҫ\n 
                                                    //printf����Ҫ&	
	n = m*1.05;
	
	printf("With tax added:$%.2f\n",n);
	
	return 0;
}
