#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,x1,x2,y1,y2,dist;
	scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
	x=x2-x1;
	y=y2-y1;
	dist=sqrt(pow(x,2)+pow(y,2));
	printf("dist=%f",dist);
}
