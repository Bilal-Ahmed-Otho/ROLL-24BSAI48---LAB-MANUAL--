/*float calculateGPA(int marks);
? GPA Scale (HEC Pakistan Standard):
o 85+ Marks ? GPA = 4.0
o 80-84 ? GPA = 3.7
o 75-79 ? GPA = 3.3
o 70-74 ? GPA = 3.0
o 65-69 ? GPA = 2.7
o 60-64 ? GPA = 2.3
o Below 60 ? Fail*/

#include<stdio.h>

float calculate_GPA(int marks,int GPA,int fail);
float calculate_GPA(int marks,int GPA,int fail){
	if(marks>85){
		//printf("Your GPA is 4.0\n");
		return 4.0;
	} else if (marks>=80&&marks<=84 ){
		//printf("Your GPA is 3.7\n");
		return 3.7;
	} else if(marks>=75&&marks<=79){
		//printf("Your GPA is 3.3\n");
		return 3.3;
	} else if(marks>=70&&marks<=74){
		//printf("Your GPA is 3.0\n");
		return 3.0;
	} else if(marks>=65&&marks<=69){
		//printf("Your GPA is 2.7\n");
		return 2.7;
	} else if(marks>=60 && marks<=64){
		//printf("Your GPA is 2.3\n");
		return 2.3;
	} else if(marks<60){
		//printf("You're  Failed !\n");
		return fail;
	} 
}

int main(){
	int marks;
	int fail;
	printf("Enter your marks here:");
	scanf("%d",&marks);
	
	float GPA = calculate_GPA(marks,GPA,fail);
	if(GPA!=fail){
	printf("Your GPA is %.0f\n",GPA);
	}else {
	printf("Fail\n");}
	return 0;
}
