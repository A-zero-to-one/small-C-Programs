#include <stdio.h>

int main() {
    int number;
    int square, cube;
    printf("Number\tSquare\t\tCube\n");
    for (number = 1; number <= 100; number++) {
        square = number * number;
        cube = number * number * number;
        printf("%1d\t%10d\t%8d\n", number, square, cube);
    }  
}