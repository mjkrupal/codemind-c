#include<stdio.h>
int main()
{
    int n,s1=0,p=0,r,s2=0,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        r=i*i;
        s1+=r;
        p+=i;
        s2=p*p;
    }
    printf("%d",s2-s1);
}