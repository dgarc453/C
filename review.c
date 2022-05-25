/**
 * This program would ask user for his full name, gender, bithday, weight, number of kids. It would save that info into a file. It would calculate the age by getting all the info from a file. It would print the reult into another file. 
 * 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char name[50];
    char gender[6];
    double weight;
    char bd[8];
    int kids;
    printf("Enter full name: ");
    scanf("%s", name);
    printf("Your name is %s\n", name);
    printf("Enter gender: ");
    scanf("%s", gender);
    printf("Enter weight: ");
    scanf("%lf", &weight);
    printf("Enter birthday (mm/dd/yy): ");
    scanf("%s", bd);
    printf("Number of kids: ");
    scanf("%d", &kids);
    printf("Your name is %s\n", name);
    printf("Your gender is %s\n", gender);
    printf("Your weight is %.2f\n", weight);
    printf("You have %d kids\n", kids);

}
 