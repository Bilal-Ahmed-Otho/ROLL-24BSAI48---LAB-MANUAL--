/*Write a function:
float calculateIncomeTax(float salary);
 FBR 2024 Income Tax Slabs for salaried persons:
o Below 600,000 PKR → No tax
o 600,000 – 1,200,000 PKR → 2.5%
o 1,200,000 – 2,400,000 PKR → 12.5%
o 2,400,000 – 3,600,000 PKR → 20%
o Above 3,600,000 PKR → 30%*/

#include<stdio.h>

float calculate_income_tax(float salary);
	float calculate_income_tax(float salary){
		float tax_rate;
		if(salary<600000){
			printf("You are not eligible to pay the tax due to low income!:\n");
		} else if (salary>=600000 || salary<1200000){
			tax_rate = 2.5;
		} else if (salary >=1200000 || salary <2400000){
			tax_rate = 12.5;
		} else if (salary >= 2400000 || salary<=3600000){
			tax_rate= 20.0;
		} else if (salary > 3600000){
			tax_rate = 30.0;
		}
		float income_tax = (tax_rate /100) * salary;
		return income_tax;
	} 

int main(){
	float salary;
	
	printf("Enter your salary:");
	scanf("%f",&salary);
	
	float tax = calculate_income_tax(salary);
	printf("Your Income Tax is %.1f\n",tax);
	
	return 0;
}
	
