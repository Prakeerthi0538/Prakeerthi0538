// usings fopen, fgets, fclose, 
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("C:\\Users\\prake\\Documents\\file handelling in c.txt","r");
	if(fp == NULL)
	{
		printf("File not found");
	}
	else
	{
		printf("File opened\n");
		printf("Contents of file..\n");
		char str[100];
		fgets(str,59,fp);
		printf("%s",str);
	}
	fclose(fp);
	
}
