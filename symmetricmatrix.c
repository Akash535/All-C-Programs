#include<stdio.h>
void main(){
    int a[10][10],t[10][10],i,j,s;
    printf("enter the no in 3*3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("matrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            t[j][i]=a[i][j];
    }
    s=1;
    for(i=0;i<3 && s;i++){
        for(j=0;j<3;j++){
            if(a[i][j] != t[i][j]){
                s=0;
                break;
            }
        }
    }
    if(s==1){
        printf("given matrix is symmetric matrix :\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("given matrix is not symmetric matrix\n");
}