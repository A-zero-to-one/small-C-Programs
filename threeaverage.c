#include<stdio.h>
int main(){

    int average,a,b,c;

    printf("enter value of a : ");
    scanf("%d", &a);
     printf("enter value of b : ");
    scanf("%d", &b);
     printf("enter value of c : ");
    scanf("%d", &c);

    average = (a+b+c) / 3;

    printf("average : %d\n", average);

return 0;
}