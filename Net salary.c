#include<stdio.h>
main()
{
	float gs,pf,pt,it,net;
	printf("enter the values:");
	scanf("%f %f %f %f",&gs,&pf,&pt,&it);
	net=gs-(pf+pt+it);
	printf("net=%f",net);
	
}
