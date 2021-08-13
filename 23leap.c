#include<stdio.h>
void fun(int ch){
    int n,sq,c,l,cu;
    switch (ch)
    {
    case 1:{
        printf("Enter the no:\n");
        scanf("%d",&n);
        sq=n*n;
        printf("square is : %d",sq);    
            break;
        }       
    case 2:{
        printf("Enter the no:\n");
        scanf("%d",&n);
        cu=n*n*n;
        printf("cube is : %d",cu);    
            break;
        }    
    case 3:{
        printf("Enter the Year:\n");
        scanf("%d",&n);
        l=n/4;
        if (l==0)
            printf("%d is leap year\n",n);
        else
            printf("%d is not leap year\n",n);
            break;
        }  
        default : printf("Invalid case \n");
    }        
}
void main(){
    int ch;
    
    printf("Menu :\n");
    printf("1: Square\n");
    printf("2: Cube\n");
    printf("3: Leap\n");
   // printf("4: Exit\n");
    printf("Enter the Chioice :\n");
    scanf("%d",&ch);
    fun(ch);
    
}