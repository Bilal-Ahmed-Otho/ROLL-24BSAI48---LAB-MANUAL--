#include<stdio.h>
int main() {
    int i, n;              // Declare variables
    for(i = 0; i <= 3; i++) {  // Loop from 0 to 3
        n += i;             // Assign i to n
        printf("%d", n);   // Print the value of n
    }
    return 0;              // End of the program
}
