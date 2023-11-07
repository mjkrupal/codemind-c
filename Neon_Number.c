#include<stdio.h>
int main()
{
    int n,i,r,s=0;
    scanf("%d",&n);
    i=n*n;
    while (i>0)
    {
        r=i%10;
        s+=r;
        i=i/10;
    }
    if (s==n) printf("Neon Number");
    else printf("Not Neon Number");
}