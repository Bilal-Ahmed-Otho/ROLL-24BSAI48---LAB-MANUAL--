#include <stdio.h>

int main() {
    float expenses[7], total = 0, average, budget;
    int i;
    
    
    printf("Enter your daily budget limit: ");
    scanf("%f", &budget);
    
    
    for (i = 0; i < 7; i++) {
        printf("Enter spending for day %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total += expenses[i];
    }
    
    
    average = total / 7;
    
    
    printf("\nTotal weekly spending: %.2f\n", total);
    printf("Average daily spending: %.2f\n", average);
    
    
    printf("Overspent days:\n");
    for (i = 0; i < 7; i++) {
        if (expenses[i] > budget) {
            printf("Day %d: %.2f\n", i + 1, expenses[i]);
        }
    }
    
    return 0;
}

