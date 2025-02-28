#include <stdio.h>

int main() {
    int study_hours[7];  
    int total_hours = 0;
    int goal = 35;  

    
    printf("Enter your study hours for each day of the week:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &study_hours[i]);
        total_hours += study_hours[i];  
    }

    
    printf("\nTotal study hours for the week: %d\n", total_hours);

    
    if (total_hours >= goal) {
        printf("Great job! You've met your weekly study goal.\n");
    } else {
        printf("You fell short of the goal. Keep pushing, you can do it!\n");
    }

    return 0;
}

