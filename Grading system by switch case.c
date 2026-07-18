#include <stdio.h>

void main() {
    int m;
    printf("Enter a number: ");
    scanf("%d", &m);

    // Convert range to a category
    // For example: 80-100 becomes 8-10, 60-70 becomes 6-7, etc.
    switch (m / 10) {
        case 8:
        case 9:
        case 10:
            printf("Good");
            break;
        case 6:
        case 7:
            printf("Average");
            break;
        case 4:
        case 5:
            printf("Bad");
            break;
        default:
            printf("Not in Range");
            break;
    }
}
