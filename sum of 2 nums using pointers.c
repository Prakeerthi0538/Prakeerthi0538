//By using pointers print the sum of 2 integers...........
#include<stdio.h>
int main()
{
	int num1,num2,*ptr1,*ptr2,sum;
	printf("Enter 2 int values: ");
	scanf("%d %d",&num1,&num2);
	ptr1=&num1;
	ptr2=&num2;
	sum=*ptr1 + *ptr2;
	printf("sum of two numbers is %d",sum);
}
