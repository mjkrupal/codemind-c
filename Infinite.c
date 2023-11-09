#include<stdio.h>
int main()
{
    int n,m,i;
    while(n)
    {
        scanf("%d",&m);
        if (m!=-1)
        {
            i=m*m;
        }
        else
        {
            break;
        }
        printf("%d
",i);
    }
}