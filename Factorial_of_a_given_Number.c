#include<stdio.h>
int main()
{
    int n,r,f=1,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
    r=i*1;
    f*=r;
    }
    printf("%d",f);
}