#include<stdio.h>
#include<conio.h>
float GPA(int marks){
        if(marks >=85){
                return 4.0;
        }else if (marks>=80){
                return 3.7;
        }else if (marks>=75){
                return 3.3;
        }else if (marks>=70){
                return 3.0;
        }else if (marks>=65){
                return 2.7;
        }else if (marks>=60){
                return 2.3;
        }else if (marks <60){
                return 0;
        }
}
int main(){
        printf("enter the marks");
        int  marks;
        scanf("%d",&marks);
        printf("the CGPA is %f :",GPA( marks));
 return 0;

}
