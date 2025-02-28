#include<stdio.h>
#include<conio.h>

float Currency_converter(float amount, char currencyType, float exchangeRate) {
    return amount * exchangeRate; 
}

int main() {
    float amount, exchangeRate, convertedAmount;
    char currencyType;
    printf("Enter the amount: ");
    scanf("%f", &amount);


    printf("Enter the currency type (USD, SAR, AED): ");
    scanf(" %c", &currencyType); 

    if (currencyType == 'U' || currencyType == 'u') { 
        printf("Enter the exchange rate for 1 USD to PKR: ");
        scanf("%f", &exchangeRate);
    } else if (currencyType == 'S' || currencyType == 's') { 
        printf("Enter the exchange rate for 1 SAR to PKR: ");
        scanf("%f", &exchangeRate);
    } else if (currencyType == 'A' || currencyType == 'a') {
        printf("Enter the exchange rate for 1 AED to PKR: ");
        scanf("%f", &exchangeRate);
    } else {
        printf("Invalid currency type entered.\n");
        return 1; 
    }


    convertedAmount = Currency_converter(amount, currencyType, exchangeRate);


    printf("The converted amount in PKR is: %f\n", convertedAmount);
 return 0;
}
