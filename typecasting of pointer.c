#include<stdio.h>
int main()
{
	int a=20;
	char ch='b';
	void *p,*q;
	p=&a;
	q=&ch;
	printf("%d\n",p);
	printf("%d\n",q);
	printf("%d\n",*(int *)p);
	printf("%c\n",*(char *)q);
}
