#include<stdio.h>
void main(){
    int a[100],b[100],i,n,j,c=0,k;
    printf("enter the size in array :\n");
    scanf("%d",&n);
    printf("enter element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nUnique element is \n");
    for(i=0;i<n;i++){
        c=0;
        for(j=0,k=n;j<k+1;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    c++;
                }
            }
        }
        if(c==0){
            printf("%d\t",a[i]);
        }
    } 
    printf("\n");   
}