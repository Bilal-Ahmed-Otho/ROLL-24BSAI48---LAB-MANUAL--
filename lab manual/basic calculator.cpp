#include <stdio.h>

int main() {
    int numbers1, numbers2;
    char operators;
    int result;

    printf("Enter Two numbers: ");
    scanf("%d %d", &numbers1, &numbers2);

    printf("Select operator (+, -, *, /): ");
    scanf(" %c", &operators); // Use %c for character input

    if (operators == '+') {
        result = numbers1 + numbers2;
        printf("%d + %d = %d\n", numbers1, numbers2, result);
    } 
    else if (operators == '-') {
        result = numbers1 - numbers2;
        printf("%d - %d = %d\n", numbers1, numbers2, result);
    } 
    else if (operators == '*') {
        result = numbers1 * numbers2;
        printf("%d * %d = %d\n", numbers1, numbers2, result);
    } 
    else if (operators == '/') {
        if (numbers2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            result = numbers1 / numbers2;
            printf("%d / %d = %d\n", numbers1, numbers2, result);
        }
    } 
    else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
