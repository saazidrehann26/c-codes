#include <stdio.h>
int main() {
int a = 5, b = 10;
printf("Before: a = %d, b = %d\n", a, b);
a = a + b; // a now holds 15
b = a - b; // b now holds 5 (15 - 10)
a = a - b; // a now holds 10 (15 - 5)
printf("After:  a = %d, b = %d\n", a, b);
return 0;
}
