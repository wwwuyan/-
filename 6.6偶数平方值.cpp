#include <stdio.h>
int main(void)
{
	int n,i,m;
	printf("输入一个数：");
	scanf("%d",&n);
	i=2;
	while(i*i<=n)
	{
		m=i*i;
		printf("%d\n",m);
		i=i+2;
	}
	return 0;
}
