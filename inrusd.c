/*write a program to print a table showing usd to inr conversion 1 usd = 85 inr u */

# include <stdio.h>
int main()
{    
    int usd , inr ;
    int lower, step, upper;
    lower=1;
    step=1;
    upper=100;
    usd = lower;
    while(usd<=upper){
        inr = 85 * usd;
        printf("%3d usd = %4d inr\n", usd ,inr);
        usd= usd + step;

    }
}
