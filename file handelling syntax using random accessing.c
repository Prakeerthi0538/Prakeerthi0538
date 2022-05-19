#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("C:\\Users\\prake\\Desktop\\new.txt","w");
	fputs("Hello World",fp);
	printf("%d",ftells(fp));
	rewind(fp)
	printf("\n%d",ftells(fp));
	fseek(fp,6,SEEK_SET);
	printf("\n%d",ftells(fp));
	fputs("Everyone",fp);
	printf("\n%d",ftells(fp));
}
