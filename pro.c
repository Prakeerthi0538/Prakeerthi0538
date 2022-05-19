#include<stdio.h>
main()
{
	int n,r;
	scanf("%d",&n);
	while(n/10)
	{
		r=n%10;
		n/10;
	}
	printf("%d",r);
}
