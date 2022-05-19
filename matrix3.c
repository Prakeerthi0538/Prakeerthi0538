//write a c program to add principle diagonal elements.
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
			printf("mat1[%d][%d]==>%d\n",i,j,mat1[i][j]);	

		}
    }
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",&mat2[i][j]);
    		printf("mat2[%d][%d]==>%d\n",i,j,mat2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		if(i==j)
    		{
			   printf("mat1[%d][%d]==>%d\n",i,j,mat1[i][j]);
			   //mat1[i][j]+=mat1[i][j];
			   printf("%d\n",mat1[i][j]);
			   printf("mat2[%d][%d]==>%d\n",i,j,mat2[i][j]);
			   //mat2[i][j]+=mat2[i][j];
			   printf("%d\n",mat2[i][j]);
			   rs[i][j]=mat1[i][j]+mat2[i][j];
		    }
		}
	}
	printf("\n");
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d ",rs[i][j]);
		}
	}
}
//diagonal difference.....in hacker rank.
