#include<stdio.h>
typedef struct student
{
	int pin;
	float per;
}stu;
void main()
{
	stu s1,*s2;
	s2=&s1;
	s2->pin=123;
	s2->per=80.00;
	printf("%d %.2f",s2->pin,s2->per);
}
