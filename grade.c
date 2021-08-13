#include<stdio.h>
void main(){
    double n;
    printf("Enter the presentage of std:\n");
    scanf("%lf",&n);
    if(n>=75)
        printf("Grade A");
    else if(n<75 && n>=60)
        printf("Grade B+");
    else if(n<60 && n>=45)
        printf("Grade B");
    else if(n<45 && n>=35)
        printf("Grade C");
    else
        printf("Fail");
}