#include<stdio.h>
int main()
{
    int p, c, b, m, cs,g;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    g=(p+c+b+m+cs)/5;
    if (g>=90) printf("Grade A");
    else if (g>=80) printf("Grade B");
    else if (g>=70) printf("Grade C");
    else if (g>=60) printf("Grade D");
    else if (g>=40) printf("Grade E");
    else printf("Grade F");
}