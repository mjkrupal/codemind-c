#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,n1,n2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    n1=x1+y1;
    n2=x2+y2;
    if (n1<=n2) printf("%d",n1);
    else printf("%d",n2);
}