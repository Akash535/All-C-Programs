#include<stdio.h>
void main(){
    int a[100],n,i;
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
    printf("\nArray reverse is :\n");
    for(i=n-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
}