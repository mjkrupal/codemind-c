#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    int a=(500-x*2)+(1000-(x+y)*4);
    int b=(500-(x+y)*2)+(1000-y*4);
    if (a>b) printf("%d",a);
    else printf("%d",b);
}