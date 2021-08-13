#include<stdio.h>
void main(){
    int a[100],n,i,j;
    printf("enter the no of array:\n");
    scanf("%d",&n);
    printf("enter no :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nDuplicate element :\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
                printf("%d ",a[i]);
    }
    
}