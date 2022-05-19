#include<stdio.h>
struct str
{
	int a;
	int b;
};
union uni
{
	int x;
	int y;
};
void main()
{
	struct str s;
	union uni u;
	printf("size of structure is %d\n",sizeof(s));
	printf("size of union is %d",sizeof(u));
}
