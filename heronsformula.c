#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2; // Calculate the semi-perimeter
    double area = sqrt(s * (s - a) * (s - b) * (s - c)); // Apply Heron's formula
    return area;
}

int main() {
    double sideA, sideB, sideC;

    printf("Enter the lengths of the triangle's sides:\n");
    printf("Side A: ");
    scanf("%lf", &sideA);
    printf("Side B: ");
    scanf("%lf", &sideB);
    printf("Side C: ");
    scanf("%lf", &sideC);

    double area = calculateArea(sideA, sideB, sideC);

    printf("The area of the triangle is: %.2lf\n", area);

    return 0;
}
