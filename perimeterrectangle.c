#include <stdio.h>

int main() {
    float perimeter, length, width;

    printf("Enter value of length: ");
    scanf("%f", &length);
    printf("Enter value of width: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
    
}



