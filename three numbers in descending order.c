#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Numbers in descending order: ");

    if (a >= b && a >= c) {
        if (b >= c) {
            printf("%d, %d, %d\n", a, b, c);
        } else {
            printf("%d, %d, %d\n", a, c, b);
        }
    } 
    else if (b >= a && b >= c) {
        if (a >= c) {
            printf("%d, %d, %d\n", b, a, c);
        } else {
            printf("%d, %d, %d\n", b, c, a);
        }
    } 
    else {
        // This case runs if c is the largest
        if (a >= b) {
            printf("%d, %d, %d\n", c, a, b);
        } else {
            printf("%d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}
