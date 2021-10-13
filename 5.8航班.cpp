#include <stdio.h>
int main(void)
{
	int i,j,k;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&i,&j);
	k=i*60+j;
	
	if(k>=413&&k<=531) printf("Closest departure time is 8:00 a.m.,arriving at 10:16 a.m.");
	else if(k>=532&&k<=631) printf("Closest departure time is 9:43 a.m.,arriving at 11:52 a.m.");
	else if(k>=631&&k<=723) printf("Closest departure time is 11:19 a.m.,arriving at 1:31 p.m.");
	else if(k>=723&&k<=803) printf("Closest departure time is 12:47 p.m.,arriving at 3:00 p.m.");
	else if(k>=804&&k<=892) printf("Closest departure time is 2:00 p.m.,arriving at 4:08 p.m.");
	else if(k>=893&&k<=1042) printf("Closest departure time is 3:45 p.m.,arriving at 5:55 p.m.");
	else if(k>=1043&&k<=1222) printf("Closest departure time is 7:00 p.m.,arriving at 9:20 p.m.");
	else printf("Closest departure time is 9:45 p.m.,arriving at 11:58 p.m.");
	
	return 0;
	
	
}
