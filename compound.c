#include<math.h>
int main()
{
    float p,r,t,ci;
    scanf("%f %f %f",&p,&r,&t);
    ci=p*(pow((1+r/100),t));
    printf("%.2f",ci);
    return 0;
}
