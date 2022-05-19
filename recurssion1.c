#include<stdio.h>
void fun(int n)
{
	if(n==0)
	{
		return;
	}
	printf("%d ",n);
	fun(n-1);
}
void main()
{
	int a[100],i,n;
	scanf("%d",&n);
    fun(n);
}
