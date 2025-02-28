#include<stdio.h>
#include<conio.h>

int main()
{
	float principle,rate,time,simple_intrest;
	
	printf("Enter the principle amount :");
	scanf("%f",&principle);
	printf("Enter the  rate of intrest :");
	scanf("%f",&rate);
	printf("Enter the time (in years) :");
	scanf("%f",&time);
	
	// formulla for simple intrest 
	simple_intrest = (principle * rate * time)/100;
	
	printf("The  simple_intrest is : %.2f\n",simple_intrest);
	
	return 0;
}