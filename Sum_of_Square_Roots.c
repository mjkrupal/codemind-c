#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,r,i;
    float s=0;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        float r=sqrt(i);
        s+=r;
    }
    printf("%.2f",s);
}