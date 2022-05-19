//VIP Question...
#include<stdio.h>
int main()
{
	int n=5;
	int *arr;
	arr=(int *)malloc(n*sizeof(int));
	int i;
	printf("Before initalizing the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",arr+i,*(arr+i));
	}
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	printf("Array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",arr+i,*(arr+i));
	}
	free(arr);
	return 0;
}
