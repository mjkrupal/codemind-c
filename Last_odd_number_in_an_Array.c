#include<stdio.h>
int main()
{
    int n,i,odd=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==1) odd=arr[i];
    }
    printf("%d",odd);
}