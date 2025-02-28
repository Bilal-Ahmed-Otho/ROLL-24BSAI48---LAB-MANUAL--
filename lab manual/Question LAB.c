//Question # 01
#include<stdio.h>
#include<conio.h>

int main()
{
	int math,science;
	int total_percentage;
	printf("Enter your percentage of math\n");
	scanf("%d",&math);
	printf("Enter your percentage of science\n");
	scanf("%d",&science);
	total_percentage = math+science;
	
	if(total_percentage >= 50)
	{
		printf("You are Eligible for Admission\n ");
		
		if(total_percentage >= 80)
		{
			printf("Congratulations! You are Eligible for Admission and Qualified for Scholarsip\n");
		}
		else
		{
			printf("You are only  Eligible for Admission\n");
		}
	}
	else
	{
		printf("You are not Eligible for Admission\n");
	}
}