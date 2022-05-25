#include <stdio.h>
#include <stdlib.h>

void openFile(){
    char line[255];
    FILE * file = fopen("employees.txt", "r");
    printf("Opening the file\n");
    fgets(line, 255, file); // to get line by line
    fclose(file);
}

int main(){
    FILE * fpointer = fopen("employees.txt", "w");
    /*
    The previus statement was to create a file. If I want to overwrite my file every single time I run the program I will use w instead of a (append)
    */
    fprintf(fpointer, "Dayana\n"); //Print into a file
    fprintf(fpointer, "Derick\n");
    fprintf(fpointer, "Olga\n");

    fclose(fpointer); //closing the file

    openFile();

    return 0;
}