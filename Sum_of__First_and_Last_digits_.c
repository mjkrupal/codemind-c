#include<stdio.h>
int main()
{
    int n,i,l,f;
    scanf("%d",&n);
    l=n%10;
    while(n>0)
    {
        f=n%10;
        n=n/10;
    }
    printf("%d",l+f);
}