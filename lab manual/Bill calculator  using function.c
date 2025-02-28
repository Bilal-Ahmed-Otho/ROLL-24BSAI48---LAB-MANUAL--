#include<stdio.h>
#include<conio.h>

float calculate_bill(int units);
int main(){
    int consumed_units,total_bill_amount;
	printf("Enter the units consumed here!:");
	scanf("%d",&consumed_units);
	
	if (consumed_units >=1 || consumed_units <=100)
	 {
	 	consumed_units *= 18;
	 } 
	 else if ( consumed_units>=101 || consumed_units<=200 ){
	 consumed_units *= 22;	
	 }
	 else if (consumed_units >=201 || consumed_units <=300){
	 	consumed_units *= 26;
	 }
	 else if (consumed_units>= 301||consumed_units<=700){
	 	consumed_units *= 30;
	 }
	 else if (consumed_units>700){
	 	consumed_units *= 35;
	 }
	 printf("The total bill is %d according to your units:",consumed_units);
	
	return 0;
	
	getch();
	}