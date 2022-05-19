#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	{
		return 1;
	}
	return fun(n-1)+fun(n-2);
}
void main()
{
	int n,res;
	scanf("%d",&n);
	res=fun(n);
	printf("%d",res);
}
