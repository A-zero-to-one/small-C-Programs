#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isdigit(c)) {
        printf("The character '%c' is a digit.\n", c);
    } else {
        printf("The character '%c' is not a digit.\n", c);
    }

    return 0;
}
