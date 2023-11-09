#include<stdio.h>
int main()
{
    int i,a,b,x,y,r=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for (i=a;i<=b;i++)
    {
        if (i%x==0&&i%y!=0)
        r+=i;
    }
    printf("%d",r);
}