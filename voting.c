#include<stdio.h>
void main(){
	int age;
	printf("\nEnter the person age :\n");
	scanf("%d",&age);
	if(age>=18)
		printf("this person is eligible for voting");
	
	else
		printf("this person is not eligible for voting");
}
