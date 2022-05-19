#include<stdio.h>
void main()
{
	int size;
	printf("enter array size:");
	scanf("%d",&size);
	int i,a[size],se,low,mid,high,flag=0;
	printf("enter array elements:");
	for(i=0;i<size;i++)
	{
	 scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("Enter searching element");
	scanf("%d",&se);
	low=0;
	high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==se)
		{
			flag=1;
			break;
		}
		else if(a[mid]<se)
		{
			low=mid+1;
		}
		else
		{
		    high=mid-1;
		}
		
	}
	if(flag=1)
	{
		printf("Element found");
	}
	else
	{
		printf("Element not found");
	}

}
