//wite a c program to print all even numbers in a given range
#include<stdio.h>
void evens_in_a_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
		   printf("%d ",i);	
		}
	}
}
void main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	evens_in_a_range(x,y);
}
