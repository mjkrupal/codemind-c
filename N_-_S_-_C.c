#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        if (i>a && i<b)
        {
            printf("%d %d %d
",i,i*i,i*i*i);
        }
    }
}