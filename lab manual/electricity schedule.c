#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showLoadSheddingSchedule(char city[]);
void generateRandomTimeSlot(char *slot);

int main() {
    char city[50];
    printf("Enter your city name: ");
    scanf("%s", city);
    
    showLoadSheddingSchedule(city);
    return 0;
}

void showLoadSheddingSchedule(char city[]) {
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    char slot1[20], slot2[20];
    
    srand(time(0)); // Seed for randomness
    printf("\nLoad Shedding Schedule for %s:\n", city);
    
    for (int i = 0; i < 7; i++) {
        generateRandomTimeSlot(slot1);
        generateRandomTimeSlot(slot2);
        printf("%s: %s, %s\n", days[i], slot1, slot2);
    }
}

void generateRandomTimeSlot(char *slot) {
    int startHour = rand() % 12 + 1; // Random hour (1-12)
    int endHour = startHour + 2; // 2-hour duration
    char period[] = "AM";
    
    if (startHour >= 6) {
        period[0] = 'P'; // Convert to PM for evening slots
    }
    
    sprintf(slot, "%d %s - %d %s", startHour, period, endHour, period);
}
