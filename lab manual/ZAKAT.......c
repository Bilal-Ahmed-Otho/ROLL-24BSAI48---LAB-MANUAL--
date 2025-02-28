#include <stdio.h>

// Function to calculate Zakat
float calculate_zakat(float total_wealth) {
    float zakat = 0.0;

    // Nisab thresholds
    float gold_nisab = 87.48;       // grams of gold
    float silver_nisab = 612.36;    // grams of silver

    // Check if the total wealth exceeds the Nisab threshold
    if (total_wealth > gold_nisab * 18000 || total_wealth > silver_nisab * 1500) { // 1 gram silver assumed as 1500 PKR
        zakat = (2.5 / 100) * total_wealth;
        printf("You are eligible to pay Zakat.\n");
    } else {
        printf("You are not eligible to pay Zakat.\n");
    }
    return zakat;
}

int main() {
    float total_wealth = 0.0;
    float gold_rate, silver_rate;
    int choice;
    float gold_grams = 0.0, silver_grams = 0.0;

    // Ask the user to choose gold or silver
    printf("Do you want to calculate based on Gold (1) or Silver (2)? Enter 1 or 2: ");
    scanf("%d", &choice);

    if (choice == 1) {  // Gold
        printf("Enter current rate of Gold (per gram in PKR): ");
        scanf("%f", &gold_rate);
        printf("Enter the grams of Gold you have: ");
        scanf("%f", &gold_grams);

        // Calculate total wealth in PKR
        total_wealth = gold_grams * gold_rate;

    } else if (choice == 2) {  // Silver
        printf("Enter current rate of Silver (per gram in PKR): ");
        scanf("%f", &silver_rate);
        printf("Enter the grams of Silver you have: ");
        scanf("%f", &silver_grams);

        // Calculate total wealth in PKR
        total_wealth = silver_grams * silver_rate;

    } else {
        printf("Invalid choice. Please restart the program.\n");
        return 1;  // Exit the program
    }

    // Display total wealth
    printf("Your total wealth is: %.2f PKR\n", total_wealth);

    // Calculate Zakat
    float zakat = calculate_zakat(total_wealth);

    // Display Zakat amount
    if (zakat > 0) {
        printf("The amount of Zakat you need to pay is: %.2f PKR\n", zakat);
    }
    return 0;

}
