#include<stdio.h>
void pos_neg();
int main(){
	pos_neg();
}
void pos_neg (){
	int num ;
	printf("WELCOME TO POSITIVE AND NEGATIVE AND CHECKING MACHINE \n enter the NO for cheching::\n");
	scanf("%d",&num);
	if (num<0){
		printf("the enterd number %d is negative\n ",num);	
	}else if(num ==0){
		printf("the entered number is 0\n");
	}else{
		printf("the enterd number %d is positive \n",num);
	}
}

