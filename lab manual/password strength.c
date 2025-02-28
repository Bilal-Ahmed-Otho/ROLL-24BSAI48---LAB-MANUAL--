#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8

int isStrongPassword(char password[]) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
        if (isdigit(password[i])) hasDigit = 1;
    }

    if (length < MIN_LENGTH) {
        printf("? Password must be at least %d characters long.\n", MIN_LENGTH);
    }
    if (!hasUpper) {
        printf("? Password must contain at least one uppercase letter.\n");
    }
    if (!hasLower) {
        printf("? Password must contain at least one lowercase letter.\n");
    }
    if (!hasDigit) {
        printf("? Password must contain at least one numeric digit.\n");
    }


    return (length >= MIN_LENGTH && hasUpper && hasLower && hasDigit);
}

int main() {
    char password[50];

    printf("?? Password Strength Checker ??\n");

    while (1) {
        printf("\nEnter a password: ");
        scanf("%s", password);

        if (isStrongPassword(password)) {
            printf("? Strong password! Your password is secure.\n");
            break;
        } else {
            printf("?? Please try again.\n");
        }
    }

    return 0;
}
