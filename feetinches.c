#include <stdio.h>
/* print Feet-Inches table usinf FOR STATEMENT */
 int main()
 {
    printf("feet\tinches\n");
 int feet;

 for (feet = 1; feet <= 5; feet++)
        printf("%3d\t%6d\n", feet, feet * 12);

 }
 /*while loop construct
 counter initialisation
 while(condition){
   statements
   counter increment
 }*/

 /*for loop construct
 for (initialisation; condition;increment){
   statements 
   }*/