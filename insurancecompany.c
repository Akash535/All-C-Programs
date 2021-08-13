#include<stdio.h>
void main(){
    int age;
    char p,c,h;
    printf("Person is male or female :\n");
    scanf(" %c",&p);
    if(p=='m' ){
        printf("Person is age :\n");
        scanf("%d",&age);
        if(36>age && age>=25){
            printf("Person is lives in (city or village) :\n");
            scanf("%c",&c);
             if(c=='c'){
                printf("%c health is (excellent or poor) :\n");
                scanf("%c",&h);   
                if(h=='excellent')
                    printf("%c is the premium is Rs. 4000 per and his /her policy amount cannot exceed Rs. 2,00,000.\n",p);
            }
            else
                printf("%c is the premium is Rs. 6000 per and his /her policy amount cannot exceed Rs. 10,000.\n",p);
        }
        
    }
    else if(p=='f' ){
        printf("Person is age :\n");
        scanf("%d",&age);
        if(36>age && age>=25){
            printf("Person is lives in (city or village) :\n");
            scanf("%c",&c);
             if(c=='city'){
                printf("%c health is (excellent or poor) :\n");
                scanf("%c",&h);   
                if(h=='excellent')
                    printf("%c is the premium is Rs. 3000 per and his /her policy amount cannot exceed Rs. 1,00,000.\n",p);
            }
    
    }
    
    else
    {
        printf("The person is not insured.\n");
        printf("his/her age is %d.\n",age);
    }
    }
}
    