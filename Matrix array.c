#include<stdio.h>
void main()
 {
     int rs,cs,i,j;
     scanf("%d %d",&rs,&cs);
     int a[rs][cs];
     //reading 2d array
     for(i=0;i<rs;i++)
     {
     	for(j=0;j<cs;j++)
     	{
     		scanf("%d",&a[i][j]);
		 }
     //printing 2d array
     for(i=0;i<rs;i++)
     {
     	for(j=0;j<cs;j++)
     	{
     
     		printf("a[%d%d]=%d ",i,j,a[i][j]);
		 }
	 }
     }
 }
