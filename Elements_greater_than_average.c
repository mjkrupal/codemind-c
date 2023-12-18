#include<stdio.h>
int main()
{
    int n,i,aver=0,elem=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        aver+=arr[i];
    }
    aver/=n;
    for (i=0;i<n;i++)
    {
        if (arr[i]>=aver)
        {
            elem++;
        }
    }
     printf("%d",elem);
}