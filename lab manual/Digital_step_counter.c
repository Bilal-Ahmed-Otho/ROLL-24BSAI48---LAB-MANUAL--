#include <stdio.h>

int main() {
    int steps[24], total = 0, max_steps = 0, min_steps = 100000, max_hour = 0, min_hour = 0;
    int i;
    
    
    for (i = 0; i < 24; i++) {
        printf("Enter steps for hour %d: ", i);
        scanf("%d", &steps[i]);
        total += steps[i];
        
        
        if (steps[i] > max_steps) {
            max_steps = steps[i];
            max_hour = i;
        }
        if (steps[i] < min_steps) {
            min_steps = steps[i];
            min_hour = i;
        }
    }
    
    
    float average = (float)total / 24;
    
    
    printf("\nTotal steps: %d\n", total);
    printf("Average steps per hour: %.2f\n", average);
    printf("Hour with max steps: %d (%d steps)\n", max_hour, max_steps);
    printf("Hour with min steps: %d (%d steps)\n", min_hour, min_steps);
    
    return 0;
}

