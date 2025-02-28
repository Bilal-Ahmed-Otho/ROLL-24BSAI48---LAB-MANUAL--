#include<stdio.h>
#include<conio.h>

int main ()
{
	float temperature, convertedtemperature;
	int choice;
	printf("Temperature converter \n");
	printf("1.celsius to fahrenhiet \n");
	printf("2.fahrenhiet to celsius \n");
	printf("choose a conversion (1 or 2):");
	scanf("%d",&choice);
	
	if (choice == 1)
	{
		printf("Enter temperature in celsius :");
		scanf("%f",&temperature);
		convertedtemperature = (temperature * 9 / 5) + 32;
		printf("Temperature in fahrenhiet : %.2f fahrenhiet\n",convertedtemperature); 
	}
	else if (choice == 2)
	{
		printf("Enter temperature in fahrenhiet :");
		scanf("%f",&temperature);
		convertedtemperature = (temperature - 32)*5/9;
		printf("Temperature in celsius : %.2f celsius\n",convertedtemperature);
	}
	else {
		printf("Invalid choice! Please select 1 or 2\n");
	}
	return 0;
}