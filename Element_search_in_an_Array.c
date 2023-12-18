#include<stdio.h>
int main()
{
    int n,e,i,s=0,a=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&e);
    for (i=0;i<n;i++)
    {
        if (e==arr[i]) s=1;
    }
    if (s==1) printf("True");
    else printf("False");
}