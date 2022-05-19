#include<stdio.h>
int is_prime(int n)
{
	if(n==1)
	{
		return 0;
	}
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void primes_in_a_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(is_prime(i)==1)
		{
			printf("%d ",i);
		}
	}
}
void composites_in_a_range(int c,int d)
{
	int i;
	for(i=c;i<=d;i++)
	{
		if(is_prime(i)==0)
		{
			printf("%d ",i);
		}
	}
}
void main()
{
	int choice;
	printf("Enter your choice:\n");
	printf("1.primality check\n");
	printf("2.primes in range\n");
	printf("3.composites in a range\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		int z;
		printf("Enter a number to check primality:");
		scanf("%d",&z);
		if(is_prime(z)==1)
		{
			printf("Prime");
		}
		else
		{
			printf("Not a Prime");
		}
	}
	else if(choice==2)
	{
		int x,y;
		printf("Enter the range:");
	    scanf("%d %d",&x,&y);
	    primes_in_a_range(x,y);
	}
	else if(choice==3)
	{
		int k,l;
		printf("Enter thr range:");
		scanf("%d %d",&k,&l);
		composites_in_a_range(k,l);
	}
}
