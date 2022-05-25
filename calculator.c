#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculator(double num1, double num2, double operator);

int main(){
    double num1;
    double num2;
    char operator;

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf("%s", &operator);
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    printf("%f\n", calculator(num1, num2, operator));
    return 0;
}

double calculator(double num1, double num2, double operator){
    double result = -99999;
    if(operator == '+'){
        result = num1 + num2;
    }else if(operator == '-'){
        result = num1 - num2;
    }else if (operator == '*'){
        result = num1 * num2;
    }else if (operator == '/'){
        if(num2 == 0){
            printf("Not valid denominator\n");
        }else{
            result = num1/num2;
        }
    }else if (operator == '^'){
        result = pow(num1, num2);
    }else{
        printf("Invalid Operator\n");
    }
    return result;
}