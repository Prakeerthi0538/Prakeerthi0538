#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=5;
	int *arr;
	arr=(int *)malloc(n*sizeof(int));
	int i;
	printf("Before initializing the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",arr+i,*(arr+i));
	}
	printf("Enter array elements\n ");
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",arr+i,*(arr+i));
	}
    int m=2;
   //recalling memory using realloc 
   realloc(arr,m*sizeof(int));
   printf("%d bytes of memory is reallocated\n",m*sizeof(int));
   printf("Enter %d elements\n",m);
   for(i;i<n+m;i++)
   {
	   scanf("%d",arr+i);
   }
   for(i=0;i<n+m;i++)
   {
	   printf("%d %d\n",arr+i,*(arr+i));
   }
  return 0;
}
