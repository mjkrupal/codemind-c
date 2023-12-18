#include<stdio.h>
int main()
{
    int n,i,s=0,a=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        a+=arr[i];
    }
    a=a/n;
    for (i=0;i<n;i++)
    {
        if (a==arr[i]) s=1;
    }
    if (s==1) printf("True");
    else printf("False");
}