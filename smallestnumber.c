#include<stdio.h>
int main(){
    int a ,b;

    printf("enter value of a : ");
    scanf("%d",&a);
    
    printf("enter value of b: ");
    scanf("%d",&b);

    if(a<b){
    printf("small number is a: %d\n",a);

    } else {
    printf("small number is b: %d\n",b);
    
    }
    return 0 ;
}