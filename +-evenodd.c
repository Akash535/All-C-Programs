#include<stdio.h>
void main(){
    int a[25],i;
    printf("Enter the 25 nos in array :\n");
    for(i=1;i<=5;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is :\n");
    for(i=1;i<=5;i++){
        printf("%d ",a[i]);
    }
    printf("\neven element:\n");
    for(i=1;i<=5;i++){
        if(a[i]%2==0)
            printf("%d ",a[i]);
        
    }
    printf("\nodd element:\n");
    for(i=1;i<=5;i++){
        if(a[i]%2!=0)
            printf("%d ",a[i]);
        
    }
    printf("\npositive element:\n");
    for(i=1;i<=5;i++){
        if(a[i]>=0)
            printf("%d ",a[i]);
        
    }
    printf("\nnegative element:\n");
    for(i=1;i<=5;i++){
        if(a[i]<0)
            printf("%d ",a[i]);
        
    }
}