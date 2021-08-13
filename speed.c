#include<stdio.h>
void main(){
	double t,d,speed;
	printf("\nEnter the Time in Hours  And Distance in KM :\n");
	scanf("%lf%lf",&t,&d);
	speed=d/t;
	printf("\nSpeed:%lf Km/h",speed);
}
