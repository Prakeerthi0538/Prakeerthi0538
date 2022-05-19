#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	{
		return 1;
	}
	fun(n-1);
	printf("%d ",n);
	fun(n-2);
}
void main()
{
	int n,res;
	scanf("%d",&n);
	fun(n);
}
