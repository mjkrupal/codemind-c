#include<stdio.h>
int main(){
    int n,i,even=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if (arr[i]%2!=0)
        {
            if (i%2==0)
            {
                even=0;
                break;
            }    
        }
    }
    if(even==1) printf("True");
    else printf("False");
}