/*Write a function:
float convertCurrency(float amount, char currencyType);
? Convert USD, SAR, or AED to PKR using user-input exchange rates.*/

#include<stdio.h>

float convert_currency(float amount,float exchange_rate, char currency_type);
float convert_currency(float amount, float exchange_rate,char currency_type){
	
	if (currency_type == 'U' || currency_type == 'u'|| currency_type =='S'|| currency_type =='s'|| currency_type =='A'|| currency_type =='a'){
		 return amount*exchange_rate;	
	} else{
		return 0;
	}
}


int main(){
	float amount,exchange_rate;
	char currency_type;
	printf("Enter the amount in PKR:");
	scanf("%f",&amount);
	
	printf("Enter Your currency_type (U for USD, S for SAR, A for AED):");
	scanf(" %c",&currency_type);
	
	printf("Enter the exchange_rate:");
	scanf("%f",&exchange_rate);
	
	float converted_amount = convert_currency(amount,exchange_rate,currency_type);
	 if (converted_amount != 0){
		printf("%.0f %c =  %.0f PKR\n",amount,currency_type,exchange_rate,converted_amount);
	}else{
		printf("Invalid Currency!:\n");
	} return 0;

}