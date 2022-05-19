#include<stdio.h>
int main(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	return a;
}
int fibi_search(int *arr,int n,int se)
{
	int i,fibi[100],L,M,K;
	L=-1 ,K=n=1;
	fibi[0]=0,,fibi[1]=1;
	for(i=2;i<n;i++)
	{
		fibi[i]=fibi[i-1]+fibi[i-2];
	}
	while(fibi[k]!=0)
	{
		M=min(L+fibi[k-2],n-1)
		if(se==arr[m])
		{
			return 1;
		}
		else if(se>arr[M])
		{
			L=M;
			K=K-1;
		}
		else if(se<<arr[M])
		{
			K=K-2;
		}
	}
	return 0;
}
void main()
{
	int size,arr[100],i,se,res;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	for(i=2;)
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

