#include<stdio.h>
int main()
{
    int unit;
    float charge,surcharge;
    scanf("%d",&unit);
    {
    if (unit<=199) charge=unit*1.20;
    else if (unit>=200 && unit<400) charge=unit*1.50;
    else if (unit>=400 && unit<600) charge=unit*1.80;
    else charge=unit*2.00;
    }
    
    if (charge>400) surcharge=charge*0.15;
    else surcharge=100.00;
    
    printf("%.2f",surcharge+charge);
}