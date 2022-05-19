#include<stdio.h>
void main()
{
	char s1[100];
	char s2[100];
	int i,len1,len2,flag=0;
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
	for(i=0;s1[i]!='\0';i++)
	len1=i;
	for(i=0;s2[i]!='\0';i++)
	len2=i;
	i=0;
	if(len1==len2)
	{
		while(i<len1)
		{
			if(s1[i]==s2[i])
			{
				i++;
			}
			else
			{
				break;
			}
		}
		if(i==len1)
		{
		   flag=1;
		   printf("Both strings are equal");
		}
		if(flag==0)
		{
			if(s1[i]>s2[i])
			{
				printf("s1 is bigger");
			}
			else
			{
				printf("s2 is bigger");
			}
		}
	}
}
