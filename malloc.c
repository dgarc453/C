#include <stdio.h>
#include <stdlib.h>

int main(){

    int * ptr;

    ptr = (int *)malloc(4 * sizeof(int)); // allocating array of 4 integers 

    if(ptr == NULL){
        printf("Memory no allocated");
    }
    else{
        printf("Memory succesfully allocated\n");

        for(int i = 0; i < 4; i++){
            ptr[i] = i * 2;
        }

        for(int i = 0; i < 4; i++ ){
            printf("%d %p\n", ptr[i], &ptr[i]);
        }
    }

    free(ptr);



    return 0;
}