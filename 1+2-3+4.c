#include<stdio.h>
void fun(int n){
    int i,c,sum=0,sum1=0,sum2=0;

    for(i=1;i<=n;i++){
        if(i%2==0){
            printf(" +%d",i);
             sum1=sum1+(i);
        }
        else{
        printf(" %d",-i);
        sum2=sum2+(-i);
        }
        sum=sum1+sum2;
    }
    printf("\nsum =%d",sum);
}
void main(){
    int n;
    printf("enter the range: \n");
    scanf("%d",&n);
    fun(n);
    
}
