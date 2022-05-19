#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n,fc=0;
	scanf("%d",&a);
	while(a>0)
	{
		n=a%10;
		fc++;
		a=a/10;
	}
  printf("%d",fc);
  
}
