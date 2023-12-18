#include<stdio.h>
int main()
{
    int n,i,a,b,s=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    for (i=0;i<n;i++)
    {
        if (arr[i]>a && arr[i]>b) s+=arr[i];
        if (arr[i]<a && arr[i]<b) s+=arr[i];
    }
    printf("%d",s);
}