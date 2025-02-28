#include<stdio.h>
#include<conio.h>

int main()
{
	
	char username [20];
	char password [20];
	
	printf("Enter your username:");
	scanf("%s", username);
	printf("Enter your Password:");
	scanf("%s", password);
	
	if (strcmp ( username, "admin" )== 0 && strcmp  (password,"1234") == 0)
	{
		printf("login successfuly\n ");
	}
	else {
		printf("login failed ! \n");
	}
	return 0;
}