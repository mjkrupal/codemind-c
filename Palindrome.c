#include<stdio.h>
int main()
{
    int n,i,r=0,p;
    scanf("%d",&n);
    p=n;
    while (n>0)
    {
        i=n%10;
        r=r*10+i;
        n=n/10;
    }
    if (r==p) printf("Palindrome");
    else printf("Not Palindrome");
}