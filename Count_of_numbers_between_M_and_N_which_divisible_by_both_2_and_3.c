#include<stdio.h>
int main()
{
    int m,n,i,c;
    scanf("%d%d",&m,&n);
    c=0;
    for (i=m;i<=n;i++)
    {
        if (i%2==0 && i%3==0) c++;
    }
    printf("%d",c);
}