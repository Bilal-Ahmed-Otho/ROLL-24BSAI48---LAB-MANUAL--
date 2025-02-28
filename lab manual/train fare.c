#include <stdio.h>
#include <string.h>

float calculateTrainFare(char class[], float distance) {
    float fare = 0;
    
    if (strcmp(class, "Economy") == 0) {
        fare = 5 * distance;
    } else if (strcmp(class, "Business") == 0) {
        fare = 10 * distance;
    } else if (strcmp(class, "First") == 0) {
        fare = 15 * distance;
    } else {
        printf("Invalid class\n");
        return -1;
    }
    
    return fare;
}

int main() {
    char class[20];
    float distance;
    
    printf("Enter class (Economy, Business, First): ");
    scanf("%s", class);
    printf("Enter distance in kilometers: ");
    scanf("%f", &distance);
    
    float fare = calculateTrainFare(class, distance);
    
    if (fare != -1) {
        printf("Fare = %.2f PKR\n", fare);
    }
    
    return 0;
}
