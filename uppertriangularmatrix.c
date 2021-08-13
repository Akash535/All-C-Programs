#include<stdio.h>
void main(){
    int a[10][10],i,j;
    printf("enter the no in matrix 3*3 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Upper triangular :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i>j)
                printf("0\t");
            else
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}