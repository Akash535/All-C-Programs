#include<stdio.h>
void main(){
    int a[25],i,n,f=0;
    printf("Enter the 25 nos in array :\n");
    for(i=1;i<=5;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is :\n");
    for(i=1;i<=5;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter the search element :\n");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        if(n==a[i]){
            f++;
        }     
    }
    if(f>0)
        printf("%d no is present.\n",n);
    else
         printf("%d no is not present.\n",n);
    
}