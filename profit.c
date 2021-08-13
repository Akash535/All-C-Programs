#include<stdio.h>
void main(){
    int n,i,pr,a[20],sum=0,sum1;
    printf("how many product :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d product value:",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(sum>=1000){
        printf("u got profit by 10 %% of %d",sum);
        pr=sum/10;
        sum1=sum-pr;
    }
    else
        sum1=sum;

    
    printf("\nSum :%d",sum1);
}