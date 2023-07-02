#include <stdio.h>

int main() {
    float circumference,radius;
    for(radius = 1; radius <=5; radius++){
        circumference = 2 * 3.14 * radius;
printf("radius %.2f, circumference %.2f\n", radius, circumference);
    }
    return 0;
 
}