#include<stdio.h>
int main()
{
    int n,i;
    float s=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        s+=arr[i];
    }
    printf("%.2f",s/n);
}