#include <stdio.h>
int main(void)
{
	int n,m;
	printf("Enter number of days in month: ");
	scanf("%d",&n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d",&m);
	
	int i=1,a=1;
	while(a<m-1){
		printf("\t");a++;
	if(a>=m-1) break;
	}	
	
	
	for(i=1;i<=n;i++){
		if(i==8-m||i==15-m||i==22-m||i==29-m||i==36-m)
			printf("%4d\n",i);
		else printf("%4d",i);	 
	}
	return 0;
}
