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
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==1)
        {
            for (i=2;i<n;i++)
            {
                if (arr[i]%2==1)
                {
                    for (i=1;i<n;i++)
                    {
                        if (arr[i]%2==0) c++;
                    }
                }
            }
        }
    }
    printf("%d",c);
}