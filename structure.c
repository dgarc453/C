#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[20];
    char major[20];
    double gpa;
    int age;
};

int main(){
    struct Student student1;
    
    strcpy(student1.name, "Dayana");
    printf("%s\n", student1.name);
    
    return 0;
}