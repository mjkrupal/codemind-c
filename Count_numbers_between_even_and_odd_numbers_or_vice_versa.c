#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for (i=1;i<n-1;i++)
    {
        if (arr[i-1]%2==0 && arr[i+1]%2==1 || arr[i-1]%2==1 && arr[i+1]%2==0) c++;
    }
    printf("%d",c);
}