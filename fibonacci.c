#include<stdio.h>
int main()
{
    int a,b,c,n,r;
    scanf("%d",&n);
    a=0,b=1,c=a+b;
    printf("%d %d ",a,b);
    for (r=1;r<=n-2;r++)
    {
        printf("%d ",c);
        a=b,b=c,c=a+b;
    }
}