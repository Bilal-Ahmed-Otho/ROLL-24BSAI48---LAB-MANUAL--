#include<stdio.h>
#include<conio.h>
int bill_calculator(int units){
        if(units >0 && units <=100){
                return units * 18;
        }else if(units >100 && units <=200){
                return units * 22;
        }else if(units >200 && units <=300){
                return units * 26;
        }else if(units >300 && units <=700){
                return units * 30;
        }else if (units>700){
                units *35;
        }
}
int main(){
        printf("enter units::");
        int units;
        scanf("%d",&units);
        printf("the final bill is %d",bill_calculator(units));
}