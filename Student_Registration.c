#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if (m-k>=n) printf("YES
");
    else printf("NO
");
    int i,j,l;
    scanf("%d%d%d",&i,&j,&l);
    if (j-l>=i) printf("YES");
    else printf("NO");
}