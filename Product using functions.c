//create a function that takes two floating point values as input and produces their product as output...
#include<stdio.h>
float product(float x,float y)
{
	float z;
	z=x*y;
	return z;
}
void main()
{
	float a,b;
	scanf("%f %f",&a,&b);
	printf("%.2f",product(a,b));
}
