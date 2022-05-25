#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double number);
int main(){

    double number;
    printf("Please enter a number: ");
    scanf("%lf", &number);
    printf("Result: %.2f\n", cube(number));
    return 0;
}

double cube(double number){
    double result = pow(number, 3);
    return result;
}