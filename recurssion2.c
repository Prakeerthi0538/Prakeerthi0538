#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	{
		return 1;
	}
	return n+fun(n-1);
}
void main()
{
	int n,res;
	scanf("%d",&n);
	res=fun(n);
	printf("%d",res);
}
