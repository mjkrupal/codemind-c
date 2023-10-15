#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    printf("%.2f",(float) ((cp-sp)*100.00)/cp);
}