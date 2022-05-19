#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
	fp1=fopen("C:\\Users\\prake\\Desktop\\new\\new1.txt","r");
	fp1=fopen("C:\\Users\\prake\\Desktop\\new\\copy1.txt","r");
	fputs("WeLLOCME",fp1);
	char ch;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch == EOF)
		{
			break;
		}
		fputc(ch,fp2);
	}
}
