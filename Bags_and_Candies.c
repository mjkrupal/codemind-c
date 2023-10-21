#include<stdio.h>
int main()
{
    int n, k, m;
    scanf("%d%d%d",&n,&k,&m);
    int a=n/(k*m);
    if (n%(k*m)==0) printf("%d",a);
    else printf("%d",a+1);
}