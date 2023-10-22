#include<stdio.h>
int main()
{
    int n, m, k;
    scanf("%d%d%d",&n,&m,&k);
    int a=m*k;
    if (n<=a) printf("YES");
    else printf("NO");
}