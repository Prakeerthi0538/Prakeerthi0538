#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	char s2[100];
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
/*	strcat(s1,s2);
	printf("%s",s1);*/
	int len=0,i,j;
	for(i=0;s1[i]!='\0';i++)
	{
		len=len+1;
	}
	j=len;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[j]=s2[i];
		j++;
	}
	printf("%s",s1);
}
