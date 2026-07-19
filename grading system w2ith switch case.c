#include <stdio.h>
int main() {
    int m;
    printf("Enter a number: ");
    scanf("%d", &m);
    if (m < 0 || m > 100) {
        printf("Not in Range");
    } else {
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
                //switch case code will inside the else
        }
    }
    return 0;
}
