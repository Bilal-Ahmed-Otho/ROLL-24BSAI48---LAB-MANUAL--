/*Write a function:
float remainingBalance(float amount);
? Mobile balance tax deduction (2024 update):
o FED (Federal Excise Duty): 19.5%
o Service Charges: 10%
o After Tax Balance = amount - (FED + Service Charges)*/
#include<stdio.h>

float remaining_balance(float amount);

int main(){
	float amount;
	float FED =19.5;
	float Service_charges=10;
	float after_tax_balance;
	
	printf("Enter the amount of your mobile:");
	scanf("%f",&amount);
	
	after_tax_balance=amount-(FED+ Service_charges);
	printf("The Balance after tax deduction is %.2f",after_tax_balance);
	return 0;
}
