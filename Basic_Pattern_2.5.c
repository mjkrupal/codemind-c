#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        for (j=i;j<=n;j++)
        {
            printf("%c ",64+i);
        }
        printf("
");
    }
}