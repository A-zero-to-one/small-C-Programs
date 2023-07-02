#include <stdio.h>

int main() {
    float celsius, kelvin;

    printf("Enter the value in Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("The temperature in Celsius is: %.2f°C\n", celsius);

    return 0;
}