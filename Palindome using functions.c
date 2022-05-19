//write a c program to find its a palindrome or not...
#include<stdio.h>
int reverse(int x)
{
	int rev=0,r;
	while(x)
	{
		r=x%10;
		rev=rev*10+x;
		x=x/10;
	}
	return rev;
}
void main()
{
    int n,t;
    scanf("%d",&n);
    t=n;
    if(t==reverse(n))
    
    	printf("Palindrome");
	
	else
	
		printf("Not a palindrome");
	
}
