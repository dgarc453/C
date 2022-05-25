#include <stdio.h>
#include <stdlib.h>

int main(){

    int age;
    double gpa;
    char grade;
    char name[20];
    char school[50];
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf("Enter your gpa: ");
    // scanf("%lf", &gpa);
    // printf("Enter your grade: ");
    // scanf("%s", &grade);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter school's name: ");
    fgets(school, 50, stdin); // to be able to store string with spaces
    printf("Your school is%s666", school);
    // printf("\nCongrats %s! You are graduated from %s at the age of %d with %f gpa and a grade of %d", name, school, age, gpa, grade);



    return 0;
}