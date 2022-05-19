//write a c program to add two matrices of same order.
#include<stdio.h>
main()
{
    int r,c;
	scanf("%d %d",&r,&c);
	int mat1[r][c], mat2[r][c],rs[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &mat1[i][j]);
			printf("mat1[%d][%d]==>%d ",i,j,mat1[i][j]);	

		}
    }
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",&mat2[i][j]);
    		printf("mat2[%d][%d]==>%d ",i,j,mat2[i][j]);
		}
	}
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		rs[i][j]=mat1[i][j]+mat2[i][j];
    	}
	}
	
 for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d", rs[i][j]);		
		}
    }
}
