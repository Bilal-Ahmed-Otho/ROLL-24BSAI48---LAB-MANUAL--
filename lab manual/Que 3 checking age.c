#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	printf("Enter your Age =");
	scanf("%d",&age);
	
	if (age >= 18)
	{
		printf("You are Eligible for casting your vote.\n ");
	
	}
	
	else
	{
		printf("You are not Eligible for casting your vote.\n ");
	}
	return 0;
}