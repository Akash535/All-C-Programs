#include<stdio.h>
#include<string.h>
void convert(char a[],char b[]){
    for(int i=0;i<strlen(a);i++){
        if(a[i]>=65 && a[i]<=90)
            a[i]=a[i]+32;
    }
    printf("\n\nString convert in Lowercase: %s\n\n",a);
    
    for(int i=0;i<strlen(b);i++){
        if(b[i]>=97 && b[i]<=122)
            b[i]=b[i]-32;
    }
    printf("String convert in Uppercase: %s",b);
}
void main(){
    char a[100],b[100];
    printf("Enter the Uppercase string :\n");
    gets(a);
    printf("Enter the Lowercase string :\n");
    gets(b);
    convert(a,b);
    
}