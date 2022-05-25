#include <stdio.h>
#include <stdlib.h>

int main(){

    // char * ptr;

    // ptr = (char *)malloc(2 * sizeof(char));

    // if(ptr == NULL){
    //     printf("Memory can not be allocated\n");
    // }else{
    //     printf("Memory succesfully allocated, address: %p\n", ptr);

    //     *(ptr) = 'A';
    //     *(ptr + 1) = 'B';

    //     printf("1st Character: %c, Address: %p, 2nd Character: %c Address: %p\n", ptr[0], &ptr[0], ptr[1], &ptr[1]);
    // }

    // free(ptr);

    // char ** words;

    // words = (char **)malloc(2 * sizeof(char *));

    // if(words == NULL){
    //     printf("Memory cannot be allocated\n");
    // }else{
    //     printf("Memory succesfully allocated, address: %p\n", words);
    //     words[0] = "Hello";
    //     words[1] = "Dayana";

    //     printf("1st Word: %s, Address: %p, 2nd Word: %s Address: %p\n",words[0], &words[0], words[1], &words[1]);
    // }
    // free(words);

    // int *numbers;
    // numbers = (int *)malloc(3 * sizeof(int));

    // if(numbers == NULL){
    //     printf("Memory cannot be allocated\n");
    // }else{
    //     printf("Memory successfully allocated! Address: %p\n", numbers);
    //     for(int i = 0; i < 3; i++){
    //         numbers[i] = i + 1;
    //         printf("Number: %d, Address: %p\n", numbers[i], &numbers[i]);
    //     }
    // }

    // free(numbers);

    double * gpas;
    gpas = (double *)malloc(3 * sizeof(double));

    if(gpas == NULL){
        printf("Memory cannot be allocated\n");
    }else{
        printf("Memory succesfully allocated\n");

        for(int i = 0; i < 3; i++){
            *(gpas + i) = i * 2.2;
            printf("GPA: %.2lf, Address: %p\n", gpas[i], &gpas[i]);
        }
    }


    return 0;
}