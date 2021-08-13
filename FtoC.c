#include<stdio.h>
void main(){
	double f,c;
	printf("\nEnter the Fahrenheit Temp:");
	scanf("%lf",&f);
	c=(f-32)*5/9;
	printf("\nFahrenheit to Celsius is:%lf",c);
}
