#include<stdio.h>
int is_prime(int n)
{
	int i,m=0,flag=0;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	if(is_prime(n))
	{
		printf("Prime");
	}
	else
	{
		printf("Not a Prime");
	}
}
