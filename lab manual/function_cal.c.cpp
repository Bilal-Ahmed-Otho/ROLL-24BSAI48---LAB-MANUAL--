#include<stdio.h>
void calculator();
int main(){
	calculator();
}
void calculator(){
	float num1,num2,result;
	char ch;
	printf("WELCOMW TO CALCULATOR \n enter two num to find sloution :");
	scanf("%f%f",&num1,&num2);
	
	
	printf("enter the oprator which you  wonna  use for calculation:");
	scanf(" %c" , &ch );
	
	
	switch(ch){
		case '+':
			result =num1+num2;
			printf("%.2f\n",result);
			break;
			
		case '-':
			result =num1-num2;
			printf(" %.2f\n",result);
			break;	
		case '*':
			result =num1*num2;
			printf(" %.2f\n",result);
			break;	
		case '/':
			result =num1/num2;
			printf(" %.2f\n",result);
			break;
		default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
	}
	printf("thankyou for using");
	
}
