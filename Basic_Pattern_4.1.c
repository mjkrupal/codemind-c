#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++)
        {
            if (i%2==0) printf("%d ",1);
            else printf("%d ",0);
        }
        printf("
");
    }
}