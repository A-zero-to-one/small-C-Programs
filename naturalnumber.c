#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a natural number.\n", number);
    } else if (number == 0) {
        printf("0 is not considered a natural number.\n");
    } else {
        printf("%d is not a natural number.\n", number);
    }

    return 0;
}
