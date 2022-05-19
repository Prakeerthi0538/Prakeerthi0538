//write a program in c demonstrate the use of &(address of) and *(value of address) and print the values ...
#include<stdio.h>
int main()
{
	int num;
	float per;
	char ch;
	printf("Enter an integer value: ");
	scanf("%d",&num);
	printf("Enter a floating value: ");
	scanf("%f",&per);
	printf("Enter a character value: ");
	scanf("%c ",&ch);
	printf("integer is %d and address is %d\n",*&num,&num);
	printf("floating value is %f and address is %d\n",*&per,&per);
	printf("character is %c and address is %d\n",*&ch,&ch);
}
