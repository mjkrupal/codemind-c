#include<stdio.h>
int main()
{
    int n,i;
    float s=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        float r=(float) 1/i;
         s+=r;
    }
    printf("%.2f",s);
}