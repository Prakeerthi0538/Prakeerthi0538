#include<stdio.h>
struct st
{
	int a;
	char name;
	float c;
};
typedef struct st s;
void main()
{
	s s1;
	printf("%d",sizeof(s1));
}
