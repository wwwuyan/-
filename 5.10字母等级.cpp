#include <stdio.h>
int main(void)
{
	int n,m;
	printf("Enter numerical grade: ");
	scanf("%d",&n);
	m=n/10;
	printf("Letter grade: ");
	switch(m)
	{
		case 10: printf("A"); break;
		case 9: printf("A"); break;
		case 8: printf("B"); break;
		case 7: printf("C"); break;
		case 6: printf("D"); break;
		case 5: case 4: case 3: case 2: case 1: case 0: 
		printf("Lettet grade: F"); break;
		
		default : printf("³ö´íÏûÏ¢"); break; 
		
	}
	return 0;
 } 
