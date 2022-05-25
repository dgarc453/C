#include <stdio.h>
#include <stdlib.h>

int main(){
    //How to get memory address of identifiers
    int age = 25;
    double gpa = 2.3;
    char grade = 'A';
    char name[] = "Dayana";
    int *m;

    printf("Name: %p\nAge: %p\nGPA: %p\nGrade: %p\n", name, &age, &gpa, &grade); // Getting memory address of variables

    m = &age; // m is a pointer to store addresses, by usign & you are getting the physical address of the variable which is a pointer

    int agePlusOne = *m; // called dereferencing, I'm getting the value that is stored in the pointer m (which is an address). So everytime I put an * in front of a pointer I am referencing 
    printf("%d", m);



    return 0;
}