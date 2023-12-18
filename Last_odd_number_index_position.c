#include<stdio.h>
int main()
{
    int n,i,index=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==1) index=i;
    }
    printf("%d",index);
}