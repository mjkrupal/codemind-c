#include<stdio.h>
int main()
{
    int x,i,f;
    scanf("%d",&x);
    i=1;
    f=(x+i)%3;
    if(f==0) printf("SMALL");
    else if(f==1) printf("NORMAL");
    else printf("HUGE");
}