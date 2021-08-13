#include<stdio.h>
void main(){
    int a[100],n,i,max,min;
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
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(max<a[i])
            max=a[i];
    }
    for(i=0;i<n;i++){
        if(min>a[i])
            min=a[i];
    }
    printf("\nmax element is %d",max);
    printf("\nmin element is %d",min);
}