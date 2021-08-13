#include<stdio.h>
void main(){
    int i,n,no,sum=0;
    printf("how many nos are enter:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("\nenter %d no :",i);
        scanf("%d",&no);
        if(no%2==0)
        sum=sum+no;
        
    }
    printf("\nsum of even no :%d",sum);
}