#include <stdio.h>
int main(void)
{
	int n,i,m;
	printf("����һ������");
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
