#include<stdio.h>
int array_sum(int a[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum= sum+a[i];
	}
	return sum;
}

void main()
{
	int x,res,i;
	scanf("%d",&x);
	int arr[x];
	for(i=0;i<x;i++)
	{
		scanf("%d",&arr[x]);
	}
    res = array_sum(arr,x);
	printf("%d",res);
}
