#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pp=n;
    while(1)
    {
        int fc=0;
        for(int i=1;i<=pp;i++)
        {
            if (pp%i==0) fc++;
        }
        if (fc==2) break;
        else  pp--;
    }
    int np=n;
    while (1)
    {
        int fc=0;
        for(int i=1;i<=np;i++) 
        {
            if (np%i==0) fc++;
        }
        if (fc==2) break;
        else np++;
        
    }
    printf("%d",abs(pp-n)<=abs(np-n)?abs(pp-n):abs(np-n)) ;
}