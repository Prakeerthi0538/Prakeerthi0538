#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int static i=2;
	int sq=sqrt(n);
	if(i>sq)
	{
		return 1;
	}
	if(n%i==0)
	{
		return 0;
	}
	i++;
	return is_prime(n);
}
void main()
{
	int a;
	scanf("%d",&a);
	if(is_prime(a))
	{
		printf("Prime");
	}
	else
	{
		printf("Not a Prime");
	}
}
