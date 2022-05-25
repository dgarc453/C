#include <stdio.h>
#include <stdlib.h>

int main(){

    int * number;
    int value;
    number = (int *)calloc(3, sizeof(int));

    printf("Enter: ");
    scanf("%d", &value);

    if(number == NULL){
        printf("Memory no allocated\n");
    }else{

        printf("Memory succesfuly allocated. Address: %p\n", number);
        for(int i = 0; i < 4; i++){
            *(number + i) = i + 1;
            printf("Number: %d Address: %p\n", number[i], &number[i]);
        } 
        free(number);
    }

    
    

    return 0;
}