#include <stdio.h>

int main() {
    float area;
    int radius;

    for (radius = 1; radius <= 10; radius++) {       
        area = 3.14 * radius * radius;
        printf("Radius %d, Area %.2f\n", radius, area);
    }

    return 0;
}