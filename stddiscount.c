#include<stdio.h>
void main(){
	float cp;
	int user;
	printf("\nEnter the cost price :\n");
	scanf("%f",&cp);
	
	printf("\nEnter the user is student or not (put the 1 for Student else 0):\n");
	scanf("%d",&user);
	
	if(user==1){
		if(cp>=500)
			printf("u got the 10%% discount for:%f",cp);
		else
			printf("u got the 5%% discount for:%f",cp);
	}
	else{
		if(cp>=500)
			printf("u got the 8%% discount for:%f\n",cp);
		else
			printf("u got the 2%% discount for:%f\n",cp);
	}
}	
