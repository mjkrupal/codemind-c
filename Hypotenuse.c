#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    float c;
    scanf("%lf%lf",&a,&b);
    c=sqrt(a*a+b*b);
    printf("%.2f",c);
}