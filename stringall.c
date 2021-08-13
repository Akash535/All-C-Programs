#include<stdio.h>
#include<string.h>
void length(char st1[],char st2[]){
    printf("\nlength of string: \n1st is  %d\n2nd is %d",strlen(st1),strlen(st2));
    //printf("\nlength of string 2 is : %d",strlen(st2));
    
}
void copy(char st1[]){
    char st[20];
    strcpy(st,st1);
    printf("\n\ncopy of string st1 in st:%s\n",st);
}
void concats(char st1[],char st2[]){
    strcat(st1,st2);
    printf("\n\nconcats of string st1 and st2 : %s",st1);
}
void compare(){
    char s1[10],s2[10];
    printf("\n\nCompare String:\n");
    printf("Enteh the 1 string:\n");
    gets(s1);
    printf("Enteh the 2 string:\n");
    gets(s2);
    if(strcmp(s1,s2)==0)
        printf("\nString is equal");
    else
        printf("\nString is not equal");
}
void reverse(char st1[]){
    printf("\n\noriginal string is: %s",st1);
    printf("\nreverse string is: %s",strrev(st1));
}
void lowerCase(){
    char a[10];
    printf("\n\nEnteh the uppercase string:\n");
    gets(a);
    printf("\noriginal string is: %s",a);
    printf("\nreverse string is: %s",strlwr(a));
}
void upperCase(){
    char b[10];
    printf("\n\nEnteh the lowercase string:\n");
    gets(b);
    printf("\noriginal string is: %s",b);
    printf("\nUppercase string is: %s",strupr(b));
}
void main(){
    char st1[20],st2[20];
    printf("Enteh the 1 string:\n");
    gets(st1);
    printf("Enteh the 2 string:\n");
    gets(st2);

    length(st1,st2);
    copy(st1);
    concats(st1,st2);
    compare();
    reverse(st1);
    lowerCase();
    upperCase();
}