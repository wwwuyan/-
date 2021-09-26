/*
#include <stdio.h>
int main(void)
{
	int x,y;
	scanf ("%d",&x);                             //scanf ĞèÒªÔËËã·û& 
	y=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
	printf ("%d",y);
	return 0;
 } 
 */
 
 
 
#include <stdio.h>
int main(void)
{
	int x,y;
	scanf ("%d",&x);                             
	y=((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf ("%d",y);
	return 0;
 } 
