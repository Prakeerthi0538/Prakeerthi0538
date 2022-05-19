#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int i,j=i-1,n,arr[100],temp=arr[i];
	for(i=1;i)
}
void main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
