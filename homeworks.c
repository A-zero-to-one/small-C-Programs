/*write a program to convert feet to inches 
 0 to 100 feet into inches table
 1 feet = 12 inches */

 #include <stdio.h>
 int main()
 {
    int feet , inches;
    int lower, step, upper;
    lower = 1;
    upper = 100;
    step = 1;
    feet = lower;
    printf("feet\tinches\n");
    while(feet<=upper){
    inches = feet * 12;
    printf("%3d\t%6d\n",feet, inches);
    feet = feet + step;
    }
 }


 /*write a program to convert inches  to centimetres 0 to 100
 1 inch into 2.54cm table
  */

/*write a functon to swap two values using call by value and call by reference*/


