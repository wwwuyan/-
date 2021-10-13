#include <stdio.h>
int main(void)
{
	int n;
	printf("n= ");
	scanf("%d",&n); 
	float i=1;float k=1;float m=1;float p=1;
	while(i<=n){
		k=k*m;m++;
		p=p+1/k;
		i++;
		
		
	}
	printf("e=%f",p);
	return 0;
}
