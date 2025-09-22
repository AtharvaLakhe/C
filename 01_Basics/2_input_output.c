#include <stdio.h>

int main() {
    int x;
    float y;
    char z;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Enter a float: ");
    scanf("%f", &y);

    printf("Enter a character: ");
    scanf(" %c", &z);

    printf("You entered: %d, %.2f, %c\n", x, y, z);
    return 0;
}
