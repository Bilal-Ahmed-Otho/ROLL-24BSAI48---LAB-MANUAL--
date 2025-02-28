#include<stdio.h>
void max_num();
int main(){
	max_num();
}
void max_num(){
	int a ,n;
	printf("WELCOME TO MAX  AND MINIMUM NUMBER CHECKING MACHINE \nenter two numbers to check which one is graeter ::");
	scanf("%d%d",&a,&n);
	if(a>n){
		printf("the number is greater whoose value is%d:",a);
	}else{
		printf("the number n is greater whoose value is%d:",n);
	}
}
 
