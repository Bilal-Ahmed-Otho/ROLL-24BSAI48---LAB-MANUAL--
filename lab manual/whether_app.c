#include <stdio.h>

int main() {
    float temperatures[30], total = 0, average, max_temp = -1000, min_temp = 1000;
    int i, max_day = 0, min_day = 0;
    
    
    for (i = 0; i < 30; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        total += temperatures[i];
        
        
        if (temperatures[i] > max_temp) {
            max_temp = temperatures[i];
            max_day = i + 1;
        }
        if (temperatures[i] < min_temp) {
            min_temp = temperatures[i];
            min_day = i + 1;
        }
    }
    
    
    average = total / 30;
    
    
    printf("\nAverage monthly temperature: %.2f\n", average);
    printf("Highest temperature: %.2f on day %d\n", max_temp, max_day);
    printf("Lowest temperature: %.2f on day %d\n", min_temp, min_day);
    
    
    printf("Days with temperature above average:\n");
    for (i = 0; i < 30; i++) {
        if (temperatures[i] > average) {
            printf("Day %d: %.2f\n", i + 1, temperatures[i]);
        }
    }
    
    return 0;
}

