#include<stdio.h>
void fun(int *a,int n)
{
	a[0]=100;
	n=100;
};
int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,n);
	printf("%d\n",a);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
