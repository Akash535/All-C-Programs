#include<stdio.h>
void main(){
    int a,c,b,ch;
    do{ 
    printf("********** MENU ************\n");
    printf("1 : Addition\n");
    printf("2 : Subtraction\n");
    printf("3 : Multipication\n");
    printf("4 : Division\n");
    printf("5 : Modules\n");

    printf("Enter the 2 no :\n");
    scanf("%d%d",&a,&b);
    printf("Enter the choice :\n");
    scanf("%d",&ch);
    
   
       switch (ch)
        {
        case 1:printf("Addition is :%d",(a+b));
            break;
        case 2:printf("Substraction is :%d",(a-b));
            break;
        case 3:printf("Multipication is :%d",(a*b));
            break;
        case 4:printf("Division is :%d",(a/b));
            break;
        case 5:printf("Modules is :%d",(a%b));
            break;
        default:printf("Incorrect choice please Try again \n");
            
            break;
        
        }
         printf("\npress 1 to continues :");
         scanf("%d",&c);
         
  }  while (c==1);
}
