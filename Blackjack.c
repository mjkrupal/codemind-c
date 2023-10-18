#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=21-(a+b);
	printf("%d",c<=10?c:-1);
}