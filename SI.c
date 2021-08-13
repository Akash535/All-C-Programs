#include<stdio.h>
void main(){
	double p,r,t,si;
	printf("\nEnter the amount or principle:");
	scanf("%lf",&p);
	printf("\nEnter the rate of intrest :");
	scanf("%lf",&r);
	printf("\nEnter the time:");
	scanf("%lf",&t);
	
	si=(p*r*t)/100;
	printf("\nSimple intrest of given data:%lf",si);
}
