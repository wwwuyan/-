#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	printf("Enter the numbers from 1 to 16 in any order: \n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
	
	printf("%d\t%d\t%d\t%d\n",a,b,c,d);
	printf("%d\t%d\t%d\t%d\n",e,f,g,h);
	printf("%d\t%d\t%d\t%d\n",i,j,k,l);
	printf("%d\t%d\t%d\t%d\n",m,n,o,p);
	
	int R1,R2,R3,R4,C1,C2,C3,C4,D1,D2;
	R1=a+b+c+d;
	R2=e+f+g+h;
	R3=i+j+k+l;
	R4=m+n+o+p;
	C1=a+e+i+m;
	C2=b+f+j+n; 
	C3=c+g+k+o;
	C4=d+h+l+p;
	D1=a+f+k+p;
	D2=d+g+j+m;
	printf("Row sums: %d %d %d %d\n",R1,R2,R3,R4);
	printf("Column sums: %d %d %d %d\n",C1,C2,C3,C4);
	printf("Diagonal sums: %d %d\n",D1,D2);
	
	return 0;
}
