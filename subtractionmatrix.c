#include<stdio.h>
void main(){
    int a[10][10],b[10][10],sub[10][10],i,j;
    printf("Enter the A matrix 3*3 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nenter the B Matrix 3*3 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }

    printf("Matrix A is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Matrix B is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            sub[i][j]=a[i][j]-b[i][j];
    }
    printf("\nSubtraction of Matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",sub[i][j]);
        printf("\n");
    }
}