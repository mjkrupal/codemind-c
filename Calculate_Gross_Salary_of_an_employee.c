#include<stdio.h>
int main()
{
    float s,h,d,pf,gs;
    scanf("%f%f%f",&s,&h,&d);
    pf=0.12*s;
    gs=s+h+d+pf;
    printf("%.2f
%.2f",pf,gs);
}