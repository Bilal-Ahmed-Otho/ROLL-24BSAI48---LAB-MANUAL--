#include<stdio.h>
#include<conio.h>
float fuel(float dis,float avg,float price){
        float fuel_needed= dis/avg*price;
        return fuel_needed;
}
int main(){
        float dis;
        float avg;
        float price;
        printf("enter distance in (km):");
        scanf("%f",&dis);
        printf("enter avrage  km/lit :");
        scanf("%f",&avg);
        printf("enter price of fuel :");
        scanf("%f",&price);
        printf("the fuel is needed of:%f:",fuel( dis, avg, price));
return 0;
}