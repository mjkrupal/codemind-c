#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for (j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for (k=1;k<=2*i-i;k++)
		{
			printf("* ");
		}
		printf("
");
	}
}